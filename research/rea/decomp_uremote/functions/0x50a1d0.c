// rea decompile_all
// name: FUN_0050a1d0
// address: 0x50a1d0
// body: available
// range: 0x50a1d0-0x50a56a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a1d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005ced1b;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CCHAICore::vftable;
  in_ECX[1] = CPCHAI::CCHAICore::vftable;
  in_ECX[2] = CPCHAI::CCHAICore::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) = CPCHAI::CCHAICore::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 8) = *(int *)(in_ECX[3] + 4) + -0xb50;
  local_8 = 0x20;
  FUN_0052c880(0);
  FUN_00517510(uVar1);
  FUN_0051f910();
  FUN_00519d30();
  FUN_00529050();
  local_8._0_1_ = 0x1f;
  FUN_00515aa0();
  local_8._0_1_ = 0x1e;
  FUN_005125d0();
  local_8._0_1_ = 0x1d;
  FUN_005081e0();
  local_8._0_1_ = 0x1c;
  FUN_00515d10();
  local_8._0_1_ = 0x1b;
  FUN_00517300();
  local_8._0_1_ = 0x1a;
  FUN_00519b10();
  local_8._0_1_ = 0x19;
  FUN_0051f700();
  local_8._0_1_ = 0x18;
  FUN_00521260();
  local_8._0_1_ = 0x17;
  FUN_00521ab0();
  local_8._0_1_ = 0x16;
  FUN_00523860();
  local_8._0_1_ = 0x15;
  FUN_00523f80();
  local_8._0_1_ = 0x14;
  FUN_00528060();
  local_8._0_1_ = 0x13;
  FUN_00528b50();
  local_8._0_1_ = 0x12;
  CMFCRibbonInfo::~CMFCRibbonInfo((CMFCRibbonInfo *)(in_ECX + 0x104));
  local_8._0_1_ = 0x11;
  FUN_0052c4f0();
  local_8._0_1_ = 0x10;
  CloseHandle((HANDLE)in_ECX[0xee]);
  FUN_005157c0();
  local_8._0_1_ = 0xf;
  FUN_0052cd30();
  local_8._0_1_ = 0xe;
  FUN_00501900();
  local_8._0_1_ = 0xd;
  FUN_00501900();
  local_8._0_1_ = 0xc;
  FUN_00501900();
  local_8._0_1_ = 0xb;
  FUN_0052cfc0();
  local_8._0_1_ = 10;
  FUN_00501900();
  local_8._0_1_ = 9;
  FUN_00506380();
  local_8._0_1_ = 8;
  piVar2 = in_ECX + 0x3a;
  *(undefined2 *)(in_ECX + 0x3b) = 0;
  if (*piVar2 != 0) {
    FUN_005b13e8(*piVar2);
  }
  *piVar2 = 0;
  local_8._0_1_ = 7;
  piVar2 = in_ECX + 0x37;
  *(undefined2 *)(in_ECX + 0x38) = 0;
  if (*piVar2 != 0) {
    FUN_005b13e8(*piVar2);
  }
  *piVar2 = 0;
  local_8._0_1_ = 6;
  FUN_00501900();
  local_8._0_1_ = 5;
  FUN_00501900();
  local_8._0_1_ = 4;
  FUN_0052dfe0();
  local_8._0_1_ = 3;
  FUN_00501900();
  local_8 = CONCAT31(local_8._1_3_,2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
  FUN_005157c0();
  in_ECX[2] = CPG::IMessageLinkCHAINotificationHandler::vftable;
  in_ECX[1] = CPG::ITaskManagerHandler::vftable;
  *in_ECX = CPG::IThreadNotificationHandler::vftable;
  ExceptionList = local_10;
  return;
}

