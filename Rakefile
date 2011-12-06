require "bundler/setup"
require "yaml"

desc "Sets up the Arduino project."
task :setup do
  config = load_config
  libraries = File.expand_path(config["libraries"])
  project_libraries = File.join(libraries, "autismband")
  mkdir_p project_libraries
  cp_r "vendor/.", project_libraries
end

def load_config
  YAML.load_file("config.yml")
end
