// rea decompile_all
// name: FUN_0066b430
// address: 0x66b430
// body: available
// range: 0x66b430-0x66b6f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066b430(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_114;
  int local_110;
  int local_10c;
  int aiStack_108 [64];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(param_1 + 0x130);
  iVar3 = *(int *)(param_1 + 0x15c);
  uVar4 = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(iVar3 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar3 + 0x44) == 0)) {
    FUN_0066bb00();
  }
  local_114 = 0;
  iVar7 = *param_2;
  local_110 = *(int *)(param_1 + 300);
  for (iVar6 = local_110; iVar6 <= iVar2; iVar6 = iVar6 + 1) {
    iVar5 = (int)*(short *)(iVar7 + (&DAT_00c02140)[iVar6] * 2);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar5 = iVar5 >> ((byte)uVar4 & 0x1f);
    aiStack_108[iVar6] = iVar5;
    if (iVar5 == 1) {
      local_114 = iVar6;
    }
  }
  iVar6 = 0;
  local_10c = *(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x40);
  iVar7 = 0;
  if (local_110 <= iVar2) {
    do {
      iVar5 = aiStack_108[local_110];
      if (iVar5 == 0) {
        iVar6 = iVar6 + 1;
      }
      else {
        while ((0xf < iVar6 && (local_110 <= local_114))) {
          FUN_0066bbb0();
          if (*(char *)(iVar3 + 0xc) == '\0') {
            FUN_0066be00((int)*(char *)(*(int *)(iVar3 + 0x4c + *(int *)(iVar3 + 0x34) * 4) + 0x4f0)
                        );
          }
          else {
            piVar1 = (int *)(*(int *)(iVar3 + 0x5c + *(int *)(iVar3 + 0x34) * 4) + 0x3c0);
            *piVar1 = *piVar1 + 1;
          }
          iVar6 = iVar6 + -0x10;
          FUN_0066bc50(iVar7);
          local_10c = *(int *)(iVar3 + 0x40);
          iVar7 = 0;
        }
        if (iVar5 < 2) {
          FUN_0066bbb0();
          if (*(char *)(iVar3 + 0xc) == '\0') {
            FUN_0066be00((int)*(char *)(*(int *)(iVar3 + 0x4c + *(int *)(iVar3 + 0x34) * 4) + 0x401
                                       + iVar6 * 0x10));
          }
          else {
            piVar1 = (int *)(*(int *)(iVar3 + 0x5c + *(int *)(iVar3 + 0x34) * 4) + 4 + iVar6 * 0x40)
            ;
            *piVar1 = *piVar1 + 1;
          }
          FUN_0066be00(1);
          FUN_0066bc50(iVar7);
          local_10c = *(int *)(iVar3 + 0x40);
          iVar7 = 0;
          iVar6 = 0;
        }
        else {
          *(byte *)(local_10c + iVar7) = (byte)iVar5 & 1;
          iVar7 = iVar7 + 1;
        }
      }
      local_110 = local_110 + 1;
    } while (local_110 <= iVar2);
    if ((0 < iVar6) || (iVar7 != 0)) {
      *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
      *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + iVar7;
      if ((*(int *)(iVar3 + 0x38) == 0x7fff) || (0x3a9 < *(uint *)(iVar3 + 0x3c))) {
        FUN_0066bbb0();
      }
    }
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar3 + 0x14);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar3 + 0x44) == 0) {
      *(int *)(iVar3 + 0x44) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1U & 7;
    }
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + -1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

