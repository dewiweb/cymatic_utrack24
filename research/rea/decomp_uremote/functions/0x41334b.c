// rea decompile_all
// name: FUN_0041334b
// address: 0x41334b
// body: available
// range: 0x41334b-0x41357a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041334b(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_2 >> 8;
  iVar3 = *(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x48);
  iVar4 = param_2 + iVar2 * -0x100;
  iVar6 = param_1 - *(int *)(in_EAX + 0x40);
  iVar7 = *(int *)(in_EAX + 0x48) >> 8;
  iVar5 = param_2 - *(int *)(in_EAX + 0x44);
  local_24 = iVar7;
  local_10 = iVar2;
  if (iVar2 < iVar7) {
    local_24 = iVar2;
    local_10 = iVar7;
  }
  if ((local_24 < *(int *)(in_EAX + 0x14)) && (*(int *)(in_EAX + 0x10) <= local_10)) {
    if (iVar7 != iVar2) {
      local_10 = 1;
      local_8 = 0x100;
      if (iVar6 == 0) {
        iVar6 = (*(int *)(in_EAX + 0x40) + (*(int *)(in_EAX + 0x40) >> 8) * -0x100) * 2;
        if (iVar5 < 0) {
          local_8 = 0;
          local_10 = -1;
        }
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + (local_8 - iVar3);
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_8 - iVar3) * iVar6;
        FUN_00413175();
        while (iVar7 = iVar7 + local_10, iVar7 != iVar2) {
          *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_8 * 2 + -0x100) * iVar6;
          *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + local_8 * 2 + -0x100;
          FUN_00413175();
        }
        iVar4 = local_8 + -0x100 + iVar4;
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + iVar4 * iVar6;
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + iVar4;
        goto LAB_00413564;
      }
      local_10 = 1;
      iVar1 = 0x100 - iVar3;
      if (iVar5 < 0) {
        local_8 = 0;
        local_10 = -1;
        iVar5 = -iVar5;
        iVar1 = iVar3;
      }
      local_c = (iVar1 * iVar6) % iVar5;
      if (local_c < 0) {
        local_c = local_c + iVar5;
      }
      FUN_0041320f(iVar7,iVar3,local_8);
      iVar7 = iVar7 + local_10;
      FUN_00413175();
      if (iVar7 != iVar2) {
        local_24 = (iVar6 * 0x100) % iVar5;
        if (local_24 < 0) {
          local_24 = local_24 + iVar5;
        }
        local_c = local_c - iVar5;
        do {
          local_c = local_c + local_24;
          if (-1 < local_c) {
            local_c = local_c - iVar5;
          }
          FUN_0041320f(iVar7,0x100 - local_8,local_8);
          iVar7 = iVar7 + local_10;
          FUN_00413175();
        } while (iVar7 != iVar2);
      }
      iVar3 = 0x100 - local_8;
    }
    FUN_0041320f(iVar7,iVar3,iVar4);
  }
LAB_00413564:
  *(int *)(in_EAX + 0x40) = param_1;
  *(int *)(in_EAX + 0x44) = param_2;
  *(int *)(in_EAX + 0x48) = iVar2 * 0x100;
  return;
}

