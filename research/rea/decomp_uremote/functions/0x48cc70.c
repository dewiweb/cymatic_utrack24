// rea decompile_all
// name: FUN_0048cc70
// address: 0x48cc70
// body: available
// range: 0x48cc70-0x48cd3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048cc70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_10;
  int local_c;
  
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x19];
  iVar7 = 1;
  do {
    iVar5 = iVar7;
    iVar7 = iVar5 + 1;
    iVar4 = iVar7;
    if (1 < iVar2) {
      iVar6 = iVar2 + -1;
      do {
        iVar4 = iVar4 * iVar7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  } while (iVar4 <= iVar1);
  if (iVar5 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(int *)(*param_1 + 0x18) = iVar4;
    (**(code **)*param_1)(param_1);
  }
  local_10 = 1;
  iVar7 = iVar2;
  piVar8 = param_2;
  if (0 < iVar2) {
    for (; iVar4 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = iVar5;
      piVar8 = piVar8 + 1;
    }
    do {
      local_10 = local_10 * iVar5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  do {
    local_c = 0;
    bVar3 = false;
    if (iVar2 < 1) {
      return local_10;
    }
    do {
      iVar7 = local_c;
      if (param_1[0xb] == 2) {
        iVar7 = *(int *)(&DAT_00919148 + local_c * 4);
      }
      iVar5 = param_2[iVar7];
      iVar4 = iVar5 + 1;
      iVar5 = (local_10 / iVar5) * iVar4;
      if (iVar5 - iVar1 != 0 && iVar1 <= iVar5) break;
      local_c = local_c + 1;
      param_2[iVar7] = iVar4;
      bVar3 = true;
      local_10 = iVar5;
    } while (local_c < iVar2);
    if (!bVar3) {
      return local_10;
    }
  } while( true );
}

