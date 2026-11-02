// rea decompile_all
// name: FUN_004e8a5d
// address: 0x4e8a5d
// body: available
// range: 0x4e8a5d-0x4e8b31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e8a5d(undefined1 *param_1)

{
  char cVar1;
  int *in_ECX;
  int unaff_EDI;
  undefined1 *apuStack_3c [6];
  undefined1 local_24 [12];
  undefined1 local_18 [4];
  undefined1 *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4e8a69;
  if (*(int *)(unaff_EDI + 0x30) == 0) {
    apuStack_3c[0] = (undefined1 *)0x0;
    apuStack_3c[0] = (undefined1 *)thunk_FUN_0046085c();
    cVar1 = FUN_00464f6b();
    if (cVar1 != '\0') {
      return;
    }
  }
  if (*in_ECX != *(int *)(unaff_EDI + 0x1c)) {
    *in_ECX = *(int *)(unaff_EDI + 0x1c);
    apuStack_3c[0] = (undefined1 *)(*(int *)(unaff_EDI + 0x1c) + 4);
    local_14 = (undefined1 *)apuStack_3c;
    FUN_004d076d();
    FUN_0047cda7();
    apuStack_3c[0] = *(undefined1 **)(unaff_EDI + 0x1c);
    FUN_0047ceaa();
  }
  apuStack_3c[0] = local_24;
  FUN_0049fe5a();
  local_8 = 0;
  apuStack_3c[0] = local_18;
  FUN_004e7e90();
  local_8._0_1_ = 1;
  apuStack_3c[0] =
       (undefined1 *)
       ((*(float *)(unaff_EDI + 8) + *(float *)(unaff_EDI + 4)) - *(float *)(unaff_EDI + 0xc));
  local_14 = apuStack_3c[0];
  local_14 = (undefined1 *)FUN_004a8e4a();
  apuStack_3c[0] = (undefined1 *)(float)(int)local_14;
  FUN_0049fec9(*(undefined4 *)(unaff_EDI + 0x1c),*(undefined4 *)(unaff_EDI + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  apuStack_3c[0] = (undefined1 *)0x4e8b19;
  FUN_004652d6();
  apuStack_3c[0] = param_1;
  FUN_004a0fcb();
  apuStack_3c[0] = (undefined1 *)0x4e8b2a;
  FUN_0049fea0();
  return;
}

