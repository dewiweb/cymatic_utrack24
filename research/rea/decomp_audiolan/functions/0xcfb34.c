// rea decompile_all
// name: FUN_000cfb34
// address: 0xcfb34
// body: available
// range: 0xcfb34-0xcfcb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cfb34(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  int aiStack_6c [3];
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [20];
  char cStack_44;
  uint auStack_38 [8];
  
  if (*(char *)(param_1 + 0x476) == '\0') {
    puVar1 = (undefined4 *)FUN_0009b63c();
    uVar2 = (**(code **)*puVar1)();
    uVar6 = DAT_000cfcb8;
    uVar3 = FUN_00003544(DAT_000cfcb8);
    aiStack_6c[0] = DAT_000cfcbc;
    if (uVar3 != 0) {
      puVar7 = &uStack_60;
      auStack_38[0] = uVar3;
      if (0x80 < uVar3) {
        puVar7 = auStack_38;
      }
      uStack_60 = 0x80;
      aiStack_6c[0] = FUN_001d9a60(aiStack_6c,*puVar7,uVar3);
    }
    aiStack_6c[0] = aiStack_6c[0] + 0xc;
    FUN_00003628(aiStack_6c[0],uVar6,uVar3 << 1);
    iVar4 = FUN_000ce99c(param_1,uVar2,aiStack_6c,&uStack_5c);
    uVar6 = DAT_000cfcc4;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x478) = 1;
      FUN_000028a4(uVar6);
    }
    else {
      FUN_000d7e18(auStack_38,param_1 + 0x14c,uVar2,uStack_5c);
      piVar5 = (int *)FUN_0009b63c();
      iVar4 = (**(code **)(*piVar5 + 8))(piVar5,auStack_38,0xffffffff);
      if (iVar4 != 0) {
        thunk_FUN_000028a4(DAT_000cfcc0);
      }
      *(undefined1 *)(param_1 + 0x477) = 1;
    }
    FUN_000e334c(auStack_58,param_1 + 0x14c,uVar2);
    piVar5 = (int *)FUN_0009b63c();
    iVar4 = (**(code **)(*piVar5 + 8))(piVar5,auStack_58,0xffffffff);
    uVar6 = DAT_000cfcc8;
    if ((iVar4 != 0) ||
       (*(char *)(param_1 + 0x479) = cStack_44, uVar6 = DAT_000cfccc, cStack_44 == '\x02')) {
      FUN_000028a4(uVar6);
    }
    *(undefined1 *)(param_1 + 0x476) = 1;
    (**(code **)(**(int **)(param_1 + 0x118) + 0xd4))
              (*(int **)(param_1 + 0x118),*(undefined1 *)(param_1 + 0x477),
               *(undefined1 *)(param_1 + 0x478),*(undefined1 *)(param_1 + 0x479));
    FUN_001d9b00(aiStack_6c);
    return;
  }
  return;
}

