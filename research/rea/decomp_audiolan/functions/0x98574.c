// rea decompile_all
// name: FUN_00098574
// address: 0x98574
// body: available
// range: 0x98574-0x98923 inclusive
// range: 0x989bc-0x989bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x989bc to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00098574(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar1 = (int *)FUN_0006e06c(param_1 + 4,s_USBDrvRxThread_00098928,0,DAT_00098924,DAT_00098924,
                               DAT_00098924,DAT_00098924,DAT_00098924);
  iVar2 = DAT_00098938;
  iVar5 = DAT_00098938 + 0xb8;
  piVar1[0x30] = 0;
  piVar1[-1] = iVar2;
  *piVar1 = iVar5;
  *(undefined1 *)(piVar1 + 0x32) = 0xff;
  *(undefined1 *)((int)piVar1 + 0xc9) = 0;
  piVar1[0x33] = 0;
  iVar2 = FUN_0016dd70(piVar1 + 0x34,_DAT_0009893c,0x24,8);
  iVar5 = FUN_0016dd70(iVar2 + 0x120,_DAT_0009893c,0x24,8);
  *(undefined4 *)(iVar5 + 0x120) = 0xffffffff;
  *(undefined1 *)(iVar5 + 0x124) = 0;
  *(undefined1 *)(iVar5 + 0x125) = 0xff;
  *(undefined1 *)(iVar5 + 0x126) = 0;
  *(undefined4 *)(iVar5 + 0x128) = 0;
  *(undefined4 *)(iVar5 + 300) = 0;
  *(undefined1 *)(iVar5 + 0x130) = 1;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  *(undefined4 *)(iVar5 + 0x13c) = 0;
  *(undefined1 *)(iVar5 + 0x140) = 1;
  *(undefined4 *)(iVar5 + 0x144) = 0;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  *(undefined4 *)(iVar5 + 0x150) = 0;
  *(undefined4 *)(iVar5 + 0x154) = 0;
  *(undefined4 *)(iVar5 + 0x158) = 0;
  puVar7 = (undefined4 *)(iVar5 + 0x15c);
  *puVar7 = 0;
  FUN_0017a1c4(puVar7,s__TxDmaComplete_0009893e + 2,0,0);
  thunk_EXT_FUN_00400100(puVar7);
  puVar7 = (undefined4 *)(iVar5 + 0x178);
  *puVar7 = 0;
  FUN_0017a1c4(puVar7,s_RxDmaComplete_00098950,0,0);
  thunk_EXT_FUN_00400100(puVar7);
  *(undefined1 *)(iVar5 + 0x194) = 0xff;
  *(undefined1 *)(iVar5 + 0x195) = 0xff;
  *(undefined4 *)(iVar5 + 0x198) = 0;
  *(undefined2 *)(iVar5 + 0x19c) = 0x80;
  *(undefined4 *)(iVar5 + 0x1a0) = 0;
  *(undefined4 *)(iVar5 + 0x1a4) = 0;
  *(int *)(iVar5 + 0x1e0) = iVar5 + 0x1a8;
  *(undefined4 *)(iVar5 + 0x1e4) = 0;
  *(undefined4 *)(iVar5 + 0x1e8) = 0;
  *(undefined4 *)(iVar5 + 0x1dc) = 0;
  *(int *)(iVar5 + 0x224) = iVar5 + 0x1ec;
  *(undefined4 *)(iVar5 + 0x228) = 0;
  *(undefined4 *)(iVar5 + 0x22c) = 0;
  *(undefined4 *)(iVar5 + 0x220) = 0;
  *(undefined4 *)(iVar5 + 0x230) = 0;
  *(undefined4 *)(iVar5 + 0x234) = 0;
  *(undefined4 *)(iVar5 + 0x238) = 0;
  *(undefined4 *)(iVar5 + 0x23c) = 0;
  *(undefined4 *)(iVar5 + 0x240) = 0;
  *(undefined4 *)(iVar5 + 0x244) = 0;
  *(undefined4 *)(iVar5 + 0x248) = 0;
  *(undefined4 *)(iVar5 + 0x24c) = 0;
  *(undefined4 *)(iVar5 + 0x250) = 0;
  *(undefined4 *)(iVar5 + 0x254) = 0;
  *(undefined4 *)(iVar5 + 600) = 0;
  *(undefined4 *)(iVar5 + 0x25c) = 0;
  *(undefined4 *)(iVar5 + 0x260) = 0;
  *(undefined4 *)(iVar5 + 0x264) = 0;
  *(undefined4 *)(iVar5 + 0x268) = 0;
  *(undefined4 *)(iVar5 + 0x26c) = 0;
  *(undefined4 *)(iVar5 + 0x270) = 0;
  *(undefined4 *)(iVar5 + 0x274) = 0;
  *(undefined4 *)(iVar5 + 0x278) = 0;
  *(undefined4 *)(iVar5 + 0x27c) = 0;
  *(undefined4 *)(iVar5 + 0x280) = 0;
  *(undefined4 *)(iVar5 + 0x284) = 0;
  *(undefined4 *)(iVar5 + 0x288) = 0;
  iVar2 = DAT_00098960 + 0x248;
  *(int *)(iVar5 + 0x290) = DAT_00098960;
  *(int *)(iVar5 + 0x294) = iVar2;
  *(undefined4 *)(iVar5 + 0x298) = 0;
  uVar3 = DAT_00098964;
  *(undefined4 *)(iVar5 + 0x29c) = 0;
  *(undefined4 *)(iVar5 + 0x28c) = uVar3;
  FUN_0014d890((undefined4 *)(iVar5 + 0x28c),0);
  iVar2 = DAT_00098968;
  iVar4 = DAT_00098968 + -0x2c;
  iVar6 = DAT_00098968 + -0xf4;
  *(int *)(iVar5 + 0x2a4) = DAT_00098968;
  *(int *)(iVar5 + 0x2a8) = iVar4;
  *(int *)(iVar5 + 0x2ac) = iVar6;
  *(undefined4 *)(iVar5 + 0x2b0) = 0;
  *(undefined4 *)(iVar5 + 0x2a0) = DAT_0009896c;
  FUN_0014d890((undefined4 *)(iVar5 + 0x2a0),iVar2 + -0x244);
  iVar2 = DAT_00098970;
  iVar4 = DAT_00098970 + -0x14;
  iVar6 = DAT_00098970 + -0x144;
  *(int *)(iVar5 + 0x2b8) = DAT_00098970;
  *(int *)(iVar5 + 700) = iVar4;
  *(int *)(iVar5 + 0x2c0) = iVar6;
  *(undefined4 *)(iVar5 + 0x2c4) = 0;
  *(undefined4 *)(iVar5 + 0x2b4) = _DAT_00098974;
  *(undefined4 *)(iVar5 + 0x2c8) = 0;
  *(undefined4 *)(iVar5 + 0x2cc) = 1;
  *(undefined4 *)(iVar5 + 0x2d0) = 1;
  FUN_0014d890(iVar5 + 0x2b4,iVar2 + -0x148);
  *(undefined4 *)(iVar5 + 0x2d4) = 0xb0000000;
  *(undefined4 *)(iVar5 + 0x2dc) = 0;
  FUN_001a07ac(iVar5 + 0x2d8,s_5__USBBusDriver_Lock_00098975 + 3);
  *(undefined1 *)(iVar5 + 0x2fc) = 0;
  *(undefined1 *)(iVar5 + 0x400) = 0;
  *(undefined1 *)(iVar5 + 0x401) = 1;
  *(undefined1 *)(iVar5 + 0x402) = 0;
  *(undefined4 *)(iVar5 + 0x404) = 0;
  uVar3 = DAT_0009898c;
  *(undefined4 *)(iVar5 + 0x408) = 0;
  *(undefined1 *)(iVar5 + 0x40c) = 0;
  *(undefined4 *)(iVar5 + 0x410) = uVar3;
  *(undefined4 *)(iVar5 + 0x414) = 0;
  *(undefined4 *)(iVar5 + 0x418) = 8;
  *(undefined4 *)(iVar5 + 0x41c) = 0;
  uVar3 = DAT_00098990;
  *(undefined4 *)(iVar5 + 0x420) = 0;
  *(undefined4 *)(iVar5 + 0x424) = uVar3;
  *(undefined4 *)(iVar5 + 0x428) = 0;
  *(undefined4 *)(iVar5 + 0x4b0) = 0;
  *(undefined4 *)(iVar5 + 0x4b4) = 0;
  *(undefined4 *)(iVar5 + 0x4b8) = 0;
  *(undefined4 *)(iVar5 + 0x4bc) = 0;
  iVar2 = 0;
  *(undefined4 *)(iVar5 + 0x4c0) = 0;
  while( true ) {
    uVar3 = FUN_001a0808(0x14,1);
    FUN_000028d8(uVar3,s_USB_Rx_Ep_d_lock_00098994,iVar2);
    iVar4 = FUN_001a0808(0x24,1);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = 0;
      FUN_001a07ac(iVar4,uVar3);
    }
    iVar6 = iVar5 + -500 + iVar2 * 4;
    *(int *)(iVar6 + 0x4f4) = iVar4;
    if (iVar4 == 0) break;
    uVar3 = FUN_001a0808(0x14,1);
    FUN_000028d8(uVar3,s_USB_Tx_Ep_d_lock_000989a8,iVar2);
    iVar4 = FUN_001a0808(0x24,1);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 4) = 0;
      FUN_001a07ac(iVar4,uVar3);
    }
    *(int *)(iVar6 + 0x534) = iVar4;
    if (iVar4 == 0) break;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar6 + 0x574) = 0;
    *(undefined4 *)(iVar6 + 0x5b4) = 0;
    if (0xf < iVar2) {
      FUN_000038a0(iVar5 + 0x42c,0x80);
      return iVar5 + -500;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000032f8();
}

