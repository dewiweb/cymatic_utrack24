// rea decompile_all
// name: FUN_0044d940
// address: 0x44d940
// body: available
// range: 0x44d940-0x44db57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d940(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 extraout_ECX;
  int extraout_EDX;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e09d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0044bfc5();
  FUN_0047d535(0,0,(float)param_2,(float)param_3);
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = FUN_0044bfc5(extraout_ECX);
  FUN_0047d5bd(param_1,0x3f800000,0x3f800000,(float)(param_2 + -2),(float)(param_3 + -2),
               (float)*(int *)(iVar1 + 0x14));
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0044bfc5();
  FUN_0047d535((float)param_5,(float)param_6,(float)param_7,(float)param_8);
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = (int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2;
  FUN_0047888f();
  local_c = 0;
  FUN_00479368(local_38,(float)(iVar1 + param_5),(float)(extraout_EDX + param_6),
               (float)(iVar1 * 3 + param_5),(float)(extraout_EDX + param_6),
               (float)(param_5 + iVar1 * 2));
  FUN_0047d2ae(local_38);
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

