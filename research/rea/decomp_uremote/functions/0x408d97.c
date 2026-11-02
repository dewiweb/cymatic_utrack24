// rea decompile_all
// name: FUN_00408d97
// address: 0x408d97
// body: available
// range: 0x408d97-0x408ef0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408d97(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EDI;
  uint local_20;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  *param_1 = 0;
  local_8 = 0;
  local_10 = 0;
  if ((*(int *)(unaff_EDI + 0x18) == 0) && (local_8 = FUN_00408c5f(), local_8 != 0)) {
    return local_8;
  }
  if ((*(int *)(unaff_EDI + 8) != 0) && (piVar2 = (int *)FUN_00411976(4,0,&local_8), local_8 == 0))
  {
    if ((param_2 != (int *)0x0) &&
       (local_10 = FUN_00411912(*(int *)(unaff_EDI + 0x14) + *(int *)(unaff_EDI + 8),&local_8),
       local_8 != 0)) {
      return local_8;
    }
    local_14 = 0;
    iVar1 = *(int *)(unaff_EDI + 0x1c);
    uVar5 = **(int **)(unaff_EDI + 0x18) - 1;
    if (*(uint *)(unaff_EDI + 0x14) <= uVar5) {
      uVar5 = 0;
    }
    iVar4 = iVar1;
    if (param_2 != (int *)0x0) {
      iVar4 = local_10;
    }
    *piVar2 = iVar4 + uVar5;
    uVar3 = *(uint *)(unaff_EDI + 8);
    local_c = 1;
    if (uVar3 != 0) {
      do {
        local_20 = *(int *)(*(int *)(unaff_EDI + 0x18) + local_c * 4) - 1;
        if (((local_20 == 0) || (local_20 < uVar5)) ||
           ((*(uint *)(unaff_EDI + 0x14) <= local_20 && (local_c < uVar3)))) {
          local_20 = uVar5;
        }
        if (param_2 == (int *)0x0) {
          piVar2[local_c] = iVar1 + local_20;
        }
        else {
          iVar4 = local_14 + local_20 + local_10;
          piVar6 = piVar2 + local_c;
          *piVar6 = iVar4;
          if (local_20 != uVar5) {
            _memcpy((void *)piVar2[local_c - 1],(void *)(uVar5 + iVar1),iVar4 - piVar2[local_c - 1])
            ;
            *(undefined1 *)*piVar6 = 0;
            *piVar6 = *piVar6 + 1;
            local_14 = local_14 + 1;
          }
        }
        local_c = local_c + 1;
        uVar3 = *(uint *)(unaff_EDI + 8);
        uVar5 = local_20;
      } while (local_c <= uVar3);
    }
    *param_1 = (int)piVar2;
    if (param_2 != (int *)0x0) {
      *param_2 = local_10;
    }
  }
  return local_8;
}

