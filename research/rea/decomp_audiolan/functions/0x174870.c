// rea decompile_all
// name: FUN_00174870
// address: 0x174870
// body: available
// range: 0x174870-0x1749d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00174870(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28 [2];
  int local_20;
  int *piStack_1c;
  int iStack_18;
  
  local_20 = param_1;
  piStack_1c = param_2;
  iStack_18 = param_3;
  iVar1 = FUN_001a5740(&local_38);
  if (iVar1 == 0) {
    uVar2 = FUN_001a6f50(s_CANCEL_001749d4);
    FUN_001a612c(local_38,uVar2);
    uVar2 = FUN_001a6f50(s_SIP_2_0_001749dc);
    FUN_001a6782(local_38,uVar2);
    FUN_001a6730(local_38,0);
    FUN_001a669c(local_38,0);
    iVar1 = FUN_001a7830(*(undefined4 *)(param_3 + 4),local_38 + 4);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_001a71c8(*(undefined4 *)(param_3 + 0xac),local_38 + 0xac), iVar1 == 0)) &&
        (iVar1 = FUN_001a3ee4(*(undefined4 *)(param_3 + 0x7c),local_38 + 0x7c), iVar1 == 0)) &&
       ((iVar1 = FUN_001a2c4c(*(undefined4 *)(param_3 + 0x4c),local_38 + 0x4c), iVar1 == 0 &&
        (iVar1 = FUN_001a3798(*(undefined4 *)(param_3 + 0x70),local_38 + 0x70), iVar1 == 0)))) {
      if (**(int **)(local_38 + 0x70) != 0) {
        if ((code *)*DAT_001749e4 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_001749e4)();
        }
      }
      iVar1 = FUN_001a6f50(s_CANCEL_001749d4);
      **(int **)(local_38 + 0x70) = iVar1;
      if (iVar1 == 0) {
        FUN_001a52e0(local_38);
        *param_2 = 0;
        return -4;
      }
      iVar1 = FUN_001a5694(param_3,0,local_28);
      if ((-1 < iVar1) && (iVar1 = FUN_001a87ec(local_28[0],&local_30), iVar1 == 0)) {
        FUN_001a4a80(local_38 + 0xb0,local_30,0xffffffff);
        iVar1 = 0;
        local_2c = param_3 + 0xa4;
        while( true ) {
          iVar3 = FUN_001a4bc4(local_2c,iVar1);
          if (iVar3 != 0) {
            FUN_001a6054(local_38,s_Max_Forwards_001749ec,&DAT_001749e8);
            FUN_001a6054(local_38,s_User_Agent_001749fc,*(undefined4 *)(local_20 + 0x84));
            *param_2 = local_38;
            return 0;
          }
          uVar2 = FUN_001a4bdc(local_2c,iVar1);
          iVar3 = FUN_001a3ee4(uVar2,&local_34);
          if (iVar3 != 0) break;
          FUN_001a4a80(local_38 + 0xa4,local_34,0xffffffff);
          iVar1 = iVar1 + 1;
        }
        FUN_001a52e0(local_38);
        *param_2 = 0;
        return iVar3;
      }
    }
    FUN_001a52e0(local_38);
    *param_2 = 0;
  }
  return iVar1;
}

