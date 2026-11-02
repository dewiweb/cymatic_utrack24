// rea decompile_all
// name: FUN_00669120
// address: 0x669120
// body: available
// range: 0x669120-0x66935c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00669120(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_34;
  int local_2c;
  uint local_28;
  int aiStack_18 [4];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar13 = 0;
  iVar1 = *(int *)(param_1 + 0x188);
  if (0 < *(int *)(param_1 + 0x124)) {
    piVar8 = (int *)(param_1 + 0x128);
    do {
      iVar4 = *(int *)(*piVar8 + 0xc);
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x48 + *(int *)(*piVar8 + 4) * 4),
                         *(int *)(param_1 + 0x80) * iVar4,iVar4,1);
      piVar8 = piVar8 + 1;
      aiStack_18[iVar13] = iVar4;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x124));
  }
  iVar13 = *(int *)(iVar1 + 0x18);
  if (iVar13 < *(int *)(iVar1 + 0x1c)) {
    do {
      local_28 = *(uint *)(iVar1 + 0x14);
      if (local_28 < *(uint *)(param_1 + 0x138)) {
        do {
          iVar4 = 0;
          local_34 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            piVar8 = (int *)(param_1 + 0x128);
            do {
              iVar2 = *piVar8;
              local_2c = 0;
              iVar12 = *(int *)(iVar2 + 0x34);
              iVar10 = iVar12 * local_28;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar5 = (int *)(aiStack_18[local_34] + iVar13 * 4);
                do {
                  iVar6 = *piVar5 + iVar10 * 0x80;
                  iVar11 = 0;
                  if (0 < iVar12) {
                    piVar9 = (int *)(iVar1 + iVar4 * 4 + 0x20);
                    do {
                      *piVar9 = iVar6;
                      piVar9 = piVar9 + 1;
                      iVar12 = *(int *)(iVar2 + 0x34);
                      iVar11 = iVar11 + 1;
                      iVar4 = iVar4 + 1;
                      iVar6 = iVar6 + 0x80;
                    } while (iVar11 < iVar12);
                  }
                  local_2c = local_2c + 1;
                  piVar5 = piVar5 + 1;
                } while (local_2c < *(int *)(iVar2 + 0x38));
              }
              local_34 = local_34 + 1;
              piVar8 = piVar8 + 1;
            } while (local_34 < *(int *)(param_1 + 0x124));
          }
          cVar3 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar1 + 0x20);
          if (cVar3 == '\0') {
            *(int *)(iVar1 + 0x18) = iVar13;
            *(uint *)(iVar1 + 0x14) = local_28;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          local_28 = local_28 + 1;
        } while (local_28 < *(uint *)(param_1 + 0x138));
      }
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    } while (iVar13 < *(int *)(iVar1 + 0x1c));
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (*(uint *)(param_1 + 0x11c) <= *(uint *)(param_1 + 0x80)) {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x124) < 2) {
    if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x11c) - 1) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0xc);
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar7;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

