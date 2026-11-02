// rea decompile_all
// name: FUN_004864c8
// address: 0x4864c8
// body: available
// range: 0x4864c8-0x486582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004864c8(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar5;
  int unaff_EBP;
  uint uVar6;
  char in_SF;
  char in_OF;
  
  *(int *)(unaff_EBP + -4) = unaff_EBX;
  if (in_OF != in_SF) {
    cVar3 = FUN_004863c3();
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    in_EDX = *(int *)(in_ECX + 8);
    in_EAX = *(int *)(in_ECX + 0xc);
  }
  iVar4 = in_EAX - unaff_EBX;
  *(undefined4 *)(unaff_EBP + -8) = 1;
  uVar6 = in_EDX >> ((byte)iVar4 & 0x1f) &
          (*(int *)(unaff_EBP + -8) << ((byte)unaff_EBX & 0x1f)) - 1U;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  do {
    iVar1 = *(int *)(unaff_EBP + 8);
    if ((int)uVar6 <= *(int *)(iVar1 + iVar5 * 4)) {
      *(int *)(in_ECX + 0xc) = iVar4;
      iVar5 = *(int *)(unaff_EBP + -4);
      *(int *)(in_ECX + 8) = in_EDX;
      if (iVar5 < 0x11) {
        uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 0x48 + iVar5 * 4) + *(int *)(iVar1 + 0x8c) + 0x11 +
                               uVar6);
      }
      else {
        piVar2 = *(int **)(in_ECX + 0x10);
        *(undefined4 *)(*piVar2 + 0x14) = 0x76;
        (**(code **)(*piVar2 + 4))(piVar2,0xffffffff);
        uVar6 = 0;
      }
      return uVar6;
    }
    if (iVar4 < 1) {
      cVar3 = FUN_004863c3(in_EDX,iVar4,1);
      if (cVar3 == '\0') {
        return 0xffffffff;
      }
      in_EDX = *(int *)(in_ECX + 8);
      iVar4 = *(int *)(in_ECX + 0xc);
    }
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 * 2 | in_EDX >> ((byte)iVar4 & 0x1f) & 1U;
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
    iVar5 = *(int *)(unaff_EBP + -4);
  } while( true );
}

