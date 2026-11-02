// rea decompile_all
// name: FUN_0048504c
// address: 0x48504c
// body: available
// range: 0x48504c-0x4851ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048504c(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar6 = *(int *)(param_1 + 0x188);
  while ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84) ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88)))))) {
    iVar5 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  local_8 = 0;
  iVar5 = *(int *)(param_1 + 0xc4);
  if (0 < *(int *)(param_1 + 0x24)) {
    local_18 = (undefined4 *)(iVar6 + 0x48);
    do {
      if (*(char *)(iVar5 + 0x30) != '\0') {
        iVar6 = (**(code **)(*(int *)(iVar4 + 4) + 0x20))
                          (iVar4,*local_18,*(int *)(iVar4 + 0x88) * *(int *)(iVar5 + 0xc),
                           *(int *)(iVar5 + 0xc),0);
        if (*(uint *)(iVar4 + 0x88) < iVar2 - 1U) {
          param_1 = *(uint *)(iVar5 + 0xc);
        }
        else {
          param_1 = *(uint *)(iVar5 + 0x20) % *(uint *)(iVar5 + 0xc);
          if (param_1 == 0) {
            param_1 = *(uint *)(iVar5 + 0xc);
          }
        }
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x19c) + 4 + local_8 * 4);
        local_14 = *(int *)(local_8 * 4 + param_2);
        local_1c = 0;
        if (0 < (int)param_1) {
          uVar7 = *(uint *)(iVar5 + 0x1c);
          do {
            local_c = *(int *)(iVar6 + local_1c * 4);
            iVar8 = 0;
            local_10 = 0;
            if (uVar7 != 0) {
              do {
                (*pcVar3)(iVar4,iVar5,local_c,local_14,iVar8);
                local_c = local_c + 0x80;
                iVar8 = iVar8 + *(int *)(iVar5 + 0x24);
                uVar7 = *(uint *)(iVar5 + 0x1c);
                local_10 = local_10 + 1;
              } while (local_10 < uVar7);
            }
            local_14 = local_14 + *(int *)(iVar5 + 0x24) * 4;
            local_1c = local_1c + 1;
          } while (local_1c < (int)param_1);
        }
      }
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar5 + 0x54;
    } while (local_8 < *(int *)(iVar4 + 0x24));
  }
  puVar1 = (uint *)(iVar4 + 0x88);
  *puVar1 = *puVar1 + 1;
  return 4 - (uint)(*puVar1 < *(uint *)(iVar4 + 0x11c));
}

