// rea decompile_all
// name: FUN_0042bdd0
// address: 0x42bdd0
// body: available
// range: 0x42bdd0-0x42bee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bdd0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint in_EAX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_ECX;
  int *in_EDX;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 local_20;
  int local_14;
  int local_10;
  
  if (((param_1 <= param_2) && (in_EAX < (uint)in_EDX[3])) && (in_ECX < (uint)in_EDX[3])) {
    local_10 = *(int *)(in_EDX[2] + in_EAX * 8);
    iVar8 = *(int *)(in_EDX[2] + in_ECX * 8);
    uVar6 = in_EAX;
    local_14 = iVar8;
    if (iVar8 < local_10) {
      uVar6 = in_ECX;
      in_ECX = in_EAX;
      local_14 = local_10;
      local_10 = iVar8;
    }
    iVar8 = *in_EDX;
    iVar1 = *(int *)(iVar8 + uVar6 * 8);
    iVar7 = *(int *)(iVar8 + in_ECX * 8);
    iVar2 = in_EDX[1];
    iVar11 = *(int *)(iVar2 + in_ECX * 8) - iVar7;
    iVar10 = *(int *)(iVar2 + uVar6 * 8) - iVar1;
    if (local_10 == local_14) {
      piVar9 = (int *)(iVar2 + param_1 * 8);
      iVar7 = (param_2 - param_1) + 1;
      do {
        iVar3 = *(int *)((iVar8 - iVar2) + (int)piVar9);
        iVar4 = iVar11;
        if (iVar3 <= iVar1) {
          iVar4 = iVar10;
        }
        *piVar9 = iVar3 + iVar4;
        piVar9 = piVar9 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else {
      local_20 = 0;
      bVar5 = false;
      do {
        iVar8 = *(int *)(*in_EDX + param_1 * 8);
        if (iVar1 < iVar8) {
          if (iVar8 < iVar7) {
            if (!bVar5) {
              bVar5 = true;
              local_20 = FUN_0040d230(0x10000);
            }
            iVar8 = thunk_FUN_00401000(*(int *)(in_EDX[2] + param_1 * 8) - local_10,local_20);
            iVar8 = iVar8 + iVar10 + iVar1;
          }
          else {
            iVar8 = iVar8 + iVar11;
          }
        }
        else {
          iVar8 = iVar8 + iVar10;
        }
        *(int *)(in_EDX[1] + param_1 * 8) = iVar8;
        param_1 = param_1 + 1;
      } while (param_1 <= param_2);
    }
  }
  return;
}

