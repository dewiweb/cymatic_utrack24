// rea decompile_all
// name: FUN_004aad85
// address: 0x4aad85
// body: available
// range: 0x4aad85-0x4aae17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aad85(int param_1)

{
  undefined1 uVar1;
  int in_EAX;
  int *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[2] = param_1;
  _eh_vector_constructor_iterator_
            (unaff_ESI + 3,3,4,(_func_void_void_ptr *)&LAB_00474e5d,FUN_0041f3a2);
  if (*(int *)(*unaff_ESI + 0xc) == 3) {
    if ((*(char *)((int)unaff_ESI + 10) == *(char *)((int)unaff_ESI + 9)) &&
       (*(char *)((int)unaff_ESI + 9) == (char)unaff_ESI[2])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(unaff_ESI + 6) = uVar1;
    *(char *)(unaff_ESI + 3) = (char)unaff_ESI[2];
    *(undefined1 *)((int)unaff_ESI + 0xd) = *(undefined1 *)((int)unaff_ESI + 9);
    *(undefined1 *)((int)unaff_ESI + 0xe) = *(undefined1 *)((int)unaff_ESI + 10);
    *(char *)((int)unaff_ESI + 0xf) = (char)unaff_ESI[2];
    *(undefined1 *)(unaff_ESI + 4) = *(undefined1 *)((int)unaff_ESI + 9);
    *(undefined1 *)((int)unaff_ESI + 0x11) = *(undefined1 *)((int)unaff_ESI + 10);
    *(char *)((int)unaff_ESI + 0x12) = (char)unaff_ESI[2];
    *(undefined1 *)((int)unaff_ESI + 0x13) = *(undefined1 *)((int)unaff_ESI + 9);
    *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)((int)unaff_ESI + 10);
    *(char *)((int)unaff_ESI + 0x15) = (char)unaff_ESI[2];
    *(undefined1 *)((int)unaff_ESI + 0x16) = *(undefined1 *)((int)unaff_ESI + 9);
    *(undefined1 *)((int)unaff_ESI + 0x17) = *(undefined1 *)((int)unaff_ESI + 10);
  }
  else {
    *(undefined1 *)(unaff_ESI + 6) = 0;
  }
  return;
}

