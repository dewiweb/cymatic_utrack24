// rea decompile_all
// name: FUN_004864bd
// address: 0x4864bd
// body: available
// range: 0x4864bd-0x4864c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004864bd(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  int in_EDX;
  uint uVar4;
  int iStack_8;
  
  iStack_8 = param_2;
  if (in_EAX < param_2) {
    cVar2 = FUN_004863c3();
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    in_EDX = *(int *)(in_ECX + 8);
    in_EAX = *(int *)(in_ECX + 0xc);
  }
  iVar3 = in_EAX - param_2;
  uVar4 = in_EDX >> ((byte)iVar3 & 0x1f) & (1 << ((byte)param_2 & 0x1f)) - 1U;
  do {
    if ((int)uVar4 <= *(int *)(param_1 + iStack_8 * 4)) {
      *(int *)(in_ECX + 0xc) = iVar3;
      *(int *)(in_ECX + 8) = in_EDX;
      if (iStack_8 < 0x11) {
        uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x48 + iStack_8 * 4) + *(int *)(param_1 + 0x8c) +
                                0x11 + uVar4);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x10);
        *(undefined4 *)(*piVar1 + 0x14) = 0x76;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        uVar4 = 0;
      }
      return uVar4;
    }
    if (iVar3 < 1) {
      cVar2 = FUN_004863c3(in_EDX,iVar3,1);
      if (cVar2 == '\0') {
        return 0xffffffff;
      }
      in_EDX = *(int *)(in_ECX + 8);
      iVar3 = *(int *)(in_ECX + 0xc);
    }
    iVar3 = iVar3 + -1;
    uVar4 = uVar4 * 2 | in_EDX >> ((byte)iVar3 & 0x1f) & 1U;
    iStack_8 = iStack_8 + 1;
  } while( true );
}

