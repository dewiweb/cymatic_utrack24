// rea decompile_all
// name: FUN_00184a28
// address: 0x184a28
// body: available
// range: 0x184a28-0x184b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00184a28(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 auStack_6c [60];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_001a1558(*param_1 + 0x4a0);
    if (iVar1 != 0) {
      local_84 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_7c = 0;
      local_76 = 0;
      local_74 = 0;
      local_6e = 0;
      iVar1 = FUN_001727f0(auStack_6c);
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined1 *)(iVar1 + 0x35) = 1;
      FUN_0015111c(iVar1 + -0x1c);
      (**(code **)(*param_2 + 0xd4))(auStack_24,param_2);
      FUN_0014f07c(&local_88,auStack_24);
      FUN_001a2410(*param_1 + 0x4a0,&local_88,0);
      FUN_0015111c(&local_88);
      FUN_0014ca10(&local_74);
      FUN_0014ca10(&local_7c);
      local_84 = 0;
      local_88 = 0;
      local_80 = 0;
    }
    iVar1 = param_2[0x44];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x114);
      FUN_00184a28(param_1);
    }
    FUN_0018a32c(param_2);
    param_1[0xc] = 0;
    (**(code **)(*param_2 + 0xd4))(auStack_30,param_2);
    FUN_002068a4(param_1 + 1,auStack_30);
    (**(code **)(*param_2 + 0x3c))(param_2);
    return;
  }
  return;
}

