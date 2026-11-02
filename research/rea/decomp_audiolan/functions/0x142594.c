// rea decompile_all
// name: FUN_00142594
// address: 0x142594
// body: available
// range: 0x142594-0x142717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x142714 to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00142594(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [20];
  
  FUN_001179e0();
  iVar2 = FUN_00160200(param_1 + 0x54,0);
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 0x60))(auStack_28,param_2);
    iVar2 = FUN_00141f3c(param_1,auStack_28);
    if (iVar2 == 0 || iVar2 == 0xd) {
      uVar1 = (**(code **)(*param_2 + 0x54))(param_2);
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x20;
      }
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x188);
      *(ushort *)(param_1 + 0xdc) = *(ushort *)(param_1 + 0xdc) | uVar4;
      *(undefined4 *)(param_1 + 0xd8) = uVar5;
      if ((uVar1 & 0x8000) != 0) {
        FUN_000eaa68(param_1 + 0x90,1);
      }
      if ((uVar1 & 1) != 0) {
        uVar5 = (**(code **)(*param_2 + 0x58))(param_2);
        FUN_000eaf74(param_1 + 0x90,uVar5);
      }
      if ((uVar1 & 2) != 0) {
        uVar6 = (**(code **)(*param_2 + 0x5c))(param_2);
        uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
        FUN_000eacec(param_1 + 0x90,uVar5,(int)uVar6,uVar5);
      }
      uVar5 = (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x24))
                        (*(int *)(*param_2 + -0x38) + (int)param_2);
      uVar3 = FUN_00119118(*(int *)(param_1 + 0x24) + 0x658,param_1 + 0x90,uVar5);
      if ((uVar3 & 0x80) == 0) {
        iVar2 = FUN_00142520(param_1);
        if ((iVar2 != 0) ||
           (uVar3 = FUN_00119118(*(int *)(param_1 + 0x24) + 0x658,param_1 + 0x90,uVar5),
           (uVar3 & 0x80) == 0)) goto LAB_00142708;
      }
      else if (iVar2 != 0) goto LAB_00142708;
      FUN_00142520(param_1);
    }
  }
LAB_00142708:
  FUN_001179d0(param_1);
  return;
}

