// rea decompile_all
// name: FUN_0016c7ec
// address: 0x16c7ec
// body: available
// range: 0x16c7ec-0x16ca43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16ca40 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016c7ec(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [72];
  
  uVar1 = FUN_001d06b8();
  if (0x31 < uVar1 - param_1[0x1c5]) {
    param_1[0x1c5] = uVar1;
    FUN_001f00bc(param_1 + 0xee);
    FUN_00167804(param_1 + 0x128,uVar1);
    bVar5 = *(char *)((int)param_1 + 0x71b) != '\0';
    uVar2 = 0;
    if (bVar5) {
      uVar2 = param_1[0x1c2];
    }
    if (bVar5 && uVar2 < uVar1) {
      if ((char)param_1[0x1c7] != '\0') {
        FUN_0016975c(param_1 + 0x128);
      }
      if (*(char *)((int)param_1 + 0x71d) != '\0') {
        FUN_001512cc(&local_70);
        FUN_0014f6cc(&local_70);
        (**(code **)(*param_1 + 0x28))(param_1,&local_70);
        FUN_0015111c(&local_70);
        FUN_0014ca10(auStack_5c);
        FUN_0014ca10(auStack_64);
        local_6c = 0;
        local_70 = 0;
        local_68 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x71b) = 0;
      *(undefined1 *)((int)param_1 + 0x71d) = 0;
      *(undefined1 *)(param_1 + 0x1c7) = 0;
    }
    FUN_001f06d4(param_1 + 0xee);
    uVar1 = FUN_001d06b8();
  }
  if (999 < uVar1 - param_1[0x1c4]) {
    param_1[0x1c4] = uVar1;
    FUN_001f00bc(param_1 + 0xee);
    uVar3 = FUN_00167dbc(param_1 + 0x128);
    FUN_0015f098(param_1 + 0xfa,uVar3);
    FUN_001f06d4(param_1 + 0xee);
    FUN_001f00bc(param_1 + 0xee);
    FUN_00160514(param_1 + 0x12f,uVar1);
    FUN_001f06d4(param_1 + 0xee);
    iVar4 = param_1[0x1e0];
    param_1[0x1e0] = param_1[0x1e2];
    param_1[0x1df] = param_1[0x1e3] - param_1[0x1e1];
    param_1[0x1e1] = param_1[0x1e3];
    param_1[0x1de] = param_1[0x1e2] - iVar4;
    if (param_2 != 0) {
      FUN_001f00bc(param_1 + 0xee);
      FUN_0015e5c8(param_1 + 0x136);
      FUN_001f06d4(param_1 + 0xee);
    }
    uVar1 = FUN_001d06b8();
  }
  uVar2 = DAT_0016ca44;
  if (param_2 != 0) {
    uVar2 = 2000;
  }
  if (uVar1 - param_1[0x1c3] < uVar2) {
    return;
  }
  param_1[0x1c3] = uVar1;
  FUN_001f00bc(param_1 + 0xee);
  if ((param_1[0x1d8] & ~param_1[0x1d7]) == 0) {
    param_1[0x1d7] = param_1[0x1d7] & ~param_1[0x1d8];
    FUN_0016b770(param_1,param_1[0x1d8]);
  }
  iVar4 = param_1[0x1d8] << 1;
  param_1[0x1d8] = iVar4;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  param_1[0x1d8] = iVar4;
  if ((param_1[0x1d9] & param_1[0x1da]) == param_1[0x1da]) {
    param_1[0x1d9] = param_1[0x1d9] & ~param_1[0x1da];
    FUN_0016f3f8(param_1,param_1[0x1da]);
  }
  param_1[0x1da] = param_1[0x1da] << 1;
  if (param_1[0x1da] == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = param_1[0x1da];
  }
  param_1[0x1da] = iVar4;
  FUN_001f06d4(param_1 + 0xee);
  return;
}

