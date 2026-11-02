// rea decompile_all
// name: FUN_000fb4ac
// address: 0xfb4ac
// body: available
// range: 0xfb4ac-0xfb6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fb4ac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000fb0a4();
  if (*(int *)(param_1 + 0x10c) != 0) {
    return;
  }
  uVar3 = 0x1000;
  iVar1 = FUN_00084950();
  iVar1 = iVar1 + 4;
  iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_VNM_Eth_Bckg_000fb6a8);
  if (iVar2 == 0) {
    FUN_0015a690(iVar1,2);
    uVar3 = FUN_0015a6a0(iVar1,2);
  }
  else {
    iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_VNM_Core_Bkg_000fb6b8);
    if (iVar2 == 0) {
      FUN_0015a690(iVar1,1);
      uVar3 = FUN_0015a6a0(iVar1,1);
    }
    else {
      iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_VNM_Core_000fb6c8);
      if (iVar2 == 0) {
        FUN_0015a690(iVar1,0);
        uVar3 = FUN_0015a6a0(iVar1,0);
      }
      else {
        iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_CHAI_Thread_000fb6d4);
        if (iVar2 == 0) {
          FUN_0015a690(iVar1,3);
          uVar3 = FUN_0015a6a0(iVar1,3);
        }
        else {
          iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_CLPLnkCtlr_000fb6e0);
          if (iVar2 == 0) {
            FUN_0015a690(iVar1,4);
            uVar3 = FUN_0015a6a0(iVar1,4);
          }
          else {
            iVar2 = FUN_00003960(*(undefined4 *)(param_1 + 0x18),s_VNM_KeyVerif_000fb6ec);
            if (iVar2 == 0) {
              FUN_0015a690(iVar1,5);
              uVar3 = FUN_0015a6a0(iVar1,5);
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_001a0808(uVar3,1);
  *(int *)(param_1 + 0x10c) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  FUN_00003850(iVar1,uVar3,0x32);
  iVar1 = FUN_0017b1b0(param_1 + 0x28,*(undefined4 *)(param_1 + 0x18),DAT_000fb6fc,param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0019f30c(*(undefined4 *)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}

