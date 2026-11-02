// rea decompile_all
// name: FUN_0000d928
// address: 0xd928
// body: available
// range: 0xd928-0xdaa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000d928(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[2] + 0x118;
  FUN_001a0700();
  if ((char)param_1[9] != '\x02') {
    uVar3 = FUN_00009e3c(param_1 + 1);
    piVar4 = (int *)FUN_00009290(param_1[2],uVar3);
    if (piVar4 == param_1) {
      *(undefined1 *)((int)param_1 + 0x2de) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x2de) = 0;
    }
    cVar1 = (char)param_1[9];
    if (cVar1 != '\x03') {
      if (cVar1 == '\x01' || cVar1 == '\x05') {
        *(undefined1 *)(param_1 + 9) = 2;
        iVar6 = FUN_00009e3c(param_1 + 1);
        if (iVar6 == -1) {
          iVar6 = (**(code **)(*param_1 + 0x1a0))(param_1,0,0xfffffffe);
          if (iVar6 == 0) goto LAB_0000d9a8;
          uVar3 = (**(code **)(*param_1 + 0x1a4))(param_1);
        }
        else {
          uVar3 = FUN_00008dcc(param_1[2],param_1);
        }
        FUN_001a0d18(iVar2);
        return uVar3;
      }
LAB_0000d9a8:
      FUN_001a0d18(iVar2);
      return 0;
    }
    iVar6 = FUN_0018e550(param_1[7]);
    param_1[0xb3] = iVar6;
    param_1[0xb5] = *(int *)(param_1[7] + 0xcc);
    iVar6 = param_1[8];
    if (iVar6 != 0) {
      iVar5 = FUN_0018e550(iVar6);
      param_1[0xb4] = iVar5;
      param_1[0xb6] = *(int *)(iVar6 + 0xcc);
    }
    *(undefined1 *)(param_1 + 0xb7) = 0;
    thunk_EXT_FUN_0040010c(param_1[0xb8]);
  }
  FUN_001a0d18(iVar2);
  return 1;
}

