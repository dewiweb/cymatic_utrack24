// rea decompile_all
// name: FUN_0015d3f8
// address: 0x15d3f8
// body: available
// range: 0x15d3f8-0x15d5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015d3f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0015cff0();
  if (*(int *)(param_1 + 0x10c) != 0) {
    return;
  }
  uVar3 = 0x1000;
  iVar1 = FUN_0009175c();
  iVar1 = iVar1 + 4;
  iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_VNM_Eth_Bckg_0015d5f4);
  if (iVar2 == 0) {
    FUN_001ba130(iVar1,2);
    uVar3 = FUN_001ba140(iVar1,2);
  }
  else {
    iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_VNM_Core_Bkg_0015d604);
    if (iVar2 == 0) {
      FUN_001ba130(iVar1,1);
      uVar3 = FUN_001ba140(iVar1,1);
    }
    else {
      iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_VNM_Core_0015d614);
      if (iVar2 == 0) {
        FUN_001ba130(iVar1,0);
        uVar3 = FUN_001ba140(iVar1,0);
      }
      else {
        iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_CHAI_Thread_0015d620);
        if (iVar2 == 0) {
          FUN_001ba130(iVar1,3);
          uVar3 = FUN_001ba140(iVar1,3);
        }
        else {
          iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_CLPLnkCtlr_0015d62c);
          if (iVar2 == 0) {
            FUN_001ba130(iVar1,4);
            uVar3 = FUN_001ba140(iVar1,4);
          }
          else {
            iVar2 = FUN_00003d18(*(undefined4 *)(param_1 + 0x18),s_VNM_KeyVerif_0015d638);
            if (iVar2 == 0) {
              FUN_001ba130(iVar1,5);
              uVar3 = FUN_001ba140(iVar1,5);
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_001f01c4(uVar3,1);
  *(int *)(param_1 + 0x10c) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  FUN_00003c08(iVar1,uVar3,0x32);
  iVar1 = FUN_001cf8e8(param_1 + 0x28,*(undefined4 *)(param_1 + 0x18),DAT_0015d648,param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_001eecc8(*(undefined4 *)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}

