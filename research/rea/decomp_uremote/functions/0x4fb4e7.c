// rea decompile_all
// name: FUN_004fb4e7
// address: 0x4fb4e7
// body: available
// range: 0x4fb4e7-0x4fb5b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb4e7(void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined1 local_404 [1024];
  
  if (*(char *)(unaff_EDI + 0x1c) != '\0') {
    *(undefined1 *)(unaff_EDI + 0x1c) = 0;
    if (*(int *)(unaff_EDI + 0x14) < 10) {
      *(int *)(unaff_EDI + 0x18) = *(int *)(unaff_EDI + 0x14);
      _memset(param_1,0,0xc);
      iVar1 = FUN_005af82d(0x10);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004e22ca();
      }
      FUN_004f6e80(uVar2);
    }
    else {
      *(int *)(unaff_EDI + 0x18) = (*(int *)(unaff_EDI + 0x18) + 1) % 10;
    }
    _eh_vector_constructor_iterator_
              (local_404,4,0x100,(_func_void_void_ptr *)&LAB_00474e5d,FUN_0041f3a2);
    FUN_00476a4a(param_2,local_404,0x100);
    FUN_004fd017(local_404,0x100,1);
    _eh_vector_destructor_iterator_(local_404,4,0x100,FUN_0041f3a2);
  }
  FUN_004fb4ce();
  return;
}

