// rea decompile_all
// name: FUN_004cde95
// address: 0x4cde95
// body: available
// range: 0x4cde95-0x4ce09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cde95(void)

{
  char cVar1;
  int unaff_EBX;
  undefined1 local_5c [8];
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  int local_48;
  undefined1 *local_44;
  undefined1 local_40 [44];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e1ae5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  thunk_FUN_00472232();
  local_c = 0;
  FUN_004c8ff2(local_40);
  FUN_004c0036();
  FUN_004652d6();
  FUN_004cdb62(local_40);
  local_c._0_1_ = 1;
  FUN_004cdd0b(local_40);
  local_c._0_1_ = 2;
  FUN_004cddd0(local_40);
  local_c._0_1_ = 3;
  FUN_004cd993(local_40);
  FUN_004cda23();
  FUN_004cd90c();
  local_c._0_1_ = 4;
  FUN_004cda9b(local_40);
  local_c = CONCAT31(local_c._1_3_,5);
  cVar1 = FUN_00465953();
  if (cVar1 == '\0') {
    cVar1 = FUN_0049f620();
    if ((cVar1 == '\0') && (*(int *)(unaff_EBX + 0xc0) == local_48)) {
      cVar1 = FUN_004733c7();
      if (cVar1 == '\0') {
        cVar1 = FUN_004e388d();
        if (cVar1 == '\0') {
          cVar1 = FUN_004e2fac(local_50);
          if (cVar1 == '\0') {
            cVar1 = FUN_004e2fac(local_54);
            if (cVar1 == '\0') goto LAB_004ce054;
          }
        }
      }
    }
  }
  FUN_004cd3d1();
  FUN_004cd3ff();
  FUN_004cd42b();
  local_44 = &stack0xffffff90;
  FUN_004d076d();
  FUN_004cd2fa();
  FUN_004cd325(local_5c);
  local_44 = &stack0xffffff90;
  FUN_004cd3be();
  FUN_004cd2cd();
LAB_004ce054:
  FUN_004c4d7a();
  FUN_004652d6();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_004e37c2();
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

