// rea decompile_all
// name: FUN_0047498a
// address: 0x47498a
// body: available
// range: 0x47498a-0x474a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_0047498a(HWND param_1,UINT param_2,WPARAM param_3,int *param_4)

{
  LRESULT LVar1;
  int iVar2;
  LPARAM lParam;
  
  if (param_1 == DAT_0095d66c) {
    if (param_2 == 0xc400) {
      FUN_0047496b();
    }
    else if (param_2 == 0xc403) {
      FUN_00473bb8();
      FUN_00473db1();
      if (param_4 != (int *)0x0) {
        FUN_004611cb();
      }
    }
    else {
      if ((param_2 != 0x4a) || (*param_4 != 0xc403)) goto LAB_00474a3b;
      param_4 = (int *)&stack0xfffffff0;
      FUN_00465446(&param_4);
      iVar2 = FUN_005af82d();
      if (iVar2 == 0) {
        lParam = 0;
      }
      else {
        lParam = FUN_004652e4();
      }
      PostMessageW(DAT_0095d66c,0xc403,0,lParam);
      FUN_004652d6();
    }
    LVar1 = 0;
  }
  else {
LAB_00474a3b:
    LVar1 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
  }
  return LVar1;
}

