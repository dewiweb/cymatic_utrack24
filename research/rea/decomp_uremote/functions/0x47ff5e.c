// rea decompile_all
// name: FUN_0047ff5e
// address: 0x47ff5e
// body: available
// range: 0x47ff5e-0x4800cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0047ff5e(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int aiStack_34 [4];
  uint local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar2 = param_1;
  param_1 = 0;
  iVar1 = *(int *)(iVar2 + 0x148);
  if (0 < *(int *)(iVar2 + 0xe4)) {
    local_8 = (int *)(iVar2 + 0xe8);
    do {
      iVar4 = *(int *)(*local_8 + 0xc);
      iVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0x20))
                        (iVar2,*(undefined4 *)(iVar1 + 0x40 + *(int *)(*local_8 + 4) * 4),
                         *(int *)(iVar1 + 8) * iVar4,iVar4,0);
      local_8 = local_8 + 1;
      aiStack_34[param_1] = iVar4;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0xe4));
  }
  local_8 = *(int **)(iVar1 + 0x10);
  do {
    if (*(int *)(iVar1 + 0x14) <= (int)local_8) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      FUN_0047fad2();
      return 1;
    }
    uVar8 = *(uint *)(iVar1 + 0xc);
    local_24 = uVar8;
    if (uVar8 < *(uint *)(iVar2 + 0xf8)) {
      do {
        local_10 = 0;
        param_1 = 0;
        if (0 < *(int *)(iVar2 + 0xe4)) {
          local_20 = (int *)(iVar2 + 0xe8);
          do {
            iVar4 = *local_20;
            iVar6 = *(int *)(iVar4 + 0x34);
            local_1c = 0;
            if (0 < *(int *)(iVar4 + 0x38)) {
              local_c = iVar6 * uVar8;
              local_c = iVar6 * uVar8 * 0x80;
              local_18 = (int *)(aiStack_34[param_1] + (int)local_8 * 4);
              do {
                iVar5 = *local_18 + local_c;
                local_14 = 0;
                if (0 < iVar6) {
                  piVar7 = (int *)(iVar1 + 0x18 + local_10 * 4);
                  do {
                    local_10 = local_10 + 1;
                    *piVar7 = iVar5;
                    iVar6 = *(int *)(iVar4 + 0x34);
                    piVar7 = piVar7 + 1;
                    iVar5 = iVar5 + 0x80;
                    local_14 = local_14 + 1;
                  } while (local_14 < iVar6);
                }
                local_1c = local_1c + 1;
                local_18 = local_18 + 1;
              } while (local_1c < *(int *)(iVar4 + 0x38));
            }
            param_1 = param_1 + 1;
            local_20 = local_20 + 1;
          } while (param_1 < *(int *)(iVar2 + 0xe4));
        }
        local_24 = uVar8;
        cVar3 = (**(code **)(*(int *)(iVar2 + 0x15c) + 4))(iVar2,iVar1 + 0x18);
        if (cVar3 == '\0') {
          *(int **)(iVar1 + 0x10) = local_8;
          *(uint *)(iVar1 + 0xc) = uVar8;
          return 0;
        }
        uVar8 = uVar8 + 1;
        local_24 = uVar8;
      } while (uVar8 < *(uint *)(iVar2 + 0xf8));
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    local_8 = (int *)((int)local_8 + 1);
  } while( true );
}

