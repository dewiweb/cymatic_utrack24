// rea decompile_all
// name: FUN_001a3658
// address: 0x1a3658
// body: available
// range: 0x1a3658-0x1a3779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a3658(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_24;
  
  *param_2 = 0;
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0xfffffffe;
  }
  iVar1 = FUN_000034d0();
  iVar2 = FUN_000034d0(param_1[1]);
  iVar3 = FUN_001a4d44();
  local_24 = iVar1 + iVar2 + iVar3 * 10 + 4;
  if ((code *)*DAT_001a377c == entry) {
    iVar1 = FUN_0019b388(local_24);
  }
  else {
    iVar1 = (*(code *)*DAT_001a377c)();
  }
  if (iVar1 != 0) {
    FUN_000028d8(iVar1,s__s__s_001a3780,*param_1,param_1[1]);
    iVar2 = FUN_000034d0(iVar1);
    iVar2 = iVar2 + iVar1;
    iVar3 = 0;
    while( true ) {
      iVar7 = FUN_001a4bc4(param_1 + 2,iVar3);
      if (iVar7 != 0) {
        *param_2 = iVar1;
        return 0;
      }
      puVar4 = (undefined4 *)FUN_001a4bdc(param_1 + 2,iVar3);
      if (puVar4[1] == 0) break;
      iVar7 = FUN_000034d0(iVar1);
      iVar5 = FUN_000034d0(*puVar4);
      iVar6 = FUN_000034d0(puVar4[1]);
      uVar8 = iVar7 + iVar5 + iVar6 + 5;
      if (local_24 < uVar8) {
        if ((code *)*DAT_001a3788 == entry) {
          iVar1 = FUN_001ab47c(iVar1,uVar8);
        }
        else {
          iVar1 = (*(code *)*DAT_001a3788)(iVar1,uVar8);
        }
        iVar2 = FUN_000034d0();
        iVar2 = iVar2 + iVar1;
        local_24 = uVar8;
      }
      FUN_00002904(iVar2,local_24 - (iVar2 - iVar1),s____s__s_001a3790,*puVar4,puVar4[1]);
      iVar7 = FUN_000034d0(iVar2);
      iVar2 = iVar7 + iVar2;
      iVar3 = iVar3 + 1;
    }
    if (iVar1 != 0) {
      if ((code *)*DAT_001a378c == entry) {
        FUN_0018a280(iVar1);
      }
      else {
        (*(code *)*DAT_001a378c)(iVar1);
      }
    }
    return 0xfffffffb;
  }
  return 0xfffffffc;
}

