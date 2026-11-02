// rea decompile_all
// name: FUN_00106474
// address: 0x106474
// body: available
// range: 0x106474-0x10683b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00106474(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined1 local_c8 [12];
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [68];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [68];
  
  bVar1 = true;
  if (param_4 == 0x20) {
    FUN_000eea30(local_c8);
    FUN_000ed6d0(local_c8,param_3,1);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
    FUN_000eea30(&local_70);
    FUN_000ecde8(&local_70,param_3,1);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),&local_70);
    FUN_000ee880(&local_70);
    FUN_000e9f98(auStack_5c);
    FUN_000e9f98(auStack_64);
    local_6c = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_000ee880(local_c8);
    FUN_000e9f98(auStack_b4);
    FUN_000e9f98(auStack_bc);
  }
  else if (param_4 == 0x10) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x20))();
  }
  else if (param_4 == 0x21) {
    FUN_000eea30(local_c8);
    FUN_000ed6d0(local_c8,param_3,3);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
    FUN_000ee880(local_c8);
    FUN_000e9f98(auStack_b4);
    FUN_000e9f98(auStack_bc);
  }
  else if (param_4 == 0x12) {
    FUN_000eea30(local_c8);
    FUN_000ed6d0(local_c8,param_3,4);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
    FUN_000ee880(local_c8);
    FUN_000e9f98(auStack_b4);
    FUN_000e9f98(auStack_bc);
  }
  else if (param_4 == 0x11) {
    FUN_000eea30(local_c8);
    FUN_000ed6d0(local_c8,param_3,5);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
    FUN_000ee880(local_c8);
    FUN_000e9f98(auStack_b4);
    FUN_000e9f98(auStack_bc);
  }
  else if (param_4 != 0x22) {
    if (param_4 == 1) {
      FUN_000eea30(local_c8);
      FUN_000ed6d0(local_c8,param_3,7);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
      FUN_000ee880(local_c8);
      FUN_000e9f98(auStack_b4);
      FUN_000e9f98(auStack_bc);
    }
    else if (param_4 == 0x1000) {
      FUN_000eea30(local_c8);
      FUN_000ed6d0(local_c8,param_3,0x10);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
      FUN_000ee880(local_c8);
      FUN_000e9f98(auStack_b4);
      FUN_000e9f98(auStack_bc);
    }
    else if (param_4 == 0x1001) {
      FUN_000eea30(local_c8);
      FUN_000ed6d0(local_c8,param_3,0x11);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
      FUN_000ee880(local_c8);
      FUN_000e9f98(auStack_b4);
      FUN_000e9f98(auStack_bc);
    }
    else {
      bVar1 = param_4 == 0x1002;
      if (bVar1) {
        FUN_000eea30(local_c8);
        FUN_000ed6d0(local_c8,param_3,0x12);
        (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),local_c8,param_2);
        FUN_000ee880(local_c8);
        FUN_000e9f98(auStack_b4);
        FUN_000e9f98(auStack_bc);
      }
    }
  }
  return bVar1;
}

