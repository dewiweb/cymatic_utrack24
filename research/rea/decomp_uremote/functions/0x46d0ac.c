// rea decompile_all
// name: FUN_0046d0ac
// address: 0x46d0ac
// body: available
// range: 0x46d0ac-0x46d142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0046d0ac(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  iVar7 = param_2;
  if ((param_2 < 1) || (*(char *)(in_ECX + 0x1c) != '\0')) {
LAB_0046d131:
    param_2 = 0;
  }
  else {
    param_2 = 0;
LAB_0046d128:
    do {
      if (*(char *)(*(int *)(in_ECX + 0x3c) + 2) != '\0') goto LAB_0046d131;
      uVar5 = FUN_0046cf3b(param_1);
      puVar1 = (uint *)(in_ECX + 0x30);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      *(int *)(in_ECX + 0x34) =
           *(int *)(in_ECX + 0x34) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
      if (uVar5 == 0) {
        pcVar3 = *(char **)(in_ECX + 0x3c);
        if ((*pcVar3 == '\0') && (pcVar3[1] == '\0')) {
          if (*(int *)(pcVar3 + 0x40) != 0) goto LAB_0046d128;
          iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(*(undefined4 *)(in_ECX + 0x38),0x8000)
          ;
          *(int *)(in_ECX + 0x20) = iVar6;
          if (0 < iVar6) {
            iVar4 = *(int *)(in_ECX + 0x3c);
            *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(in_ECX + 0x38);
            *(int *)(iVar4 + 0x40) = iVar6;
            goto LAB_0046d128;
          }
        }
        *(undefined1 *)(in_ECX + 0x1c) = 1;
        return param_2;
      }
      param_2 = param_2 + uVar5;
      param_1 = param_1 + uVar5;
      iVar7 = iVar7 - uVar5;
    } while (0 < iVar7);
  }
  return param_2;
}

