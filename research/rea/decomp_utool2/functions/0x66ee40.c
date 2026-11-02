// rea decompile_all
// name: FUN_0066ee40
// address: 0x66ee40
// body: available
// range: 0x66ee40-0x66ef85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ee40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int aiStack_1c [4];
  int local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  iVar1 = *(int *)(param_1 + 0x15c);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = **(undefined4 **)(param_1 + 0x18);
  uVar3 = (*(undefined4 **)(param_1 + 0x18))[1];
  aiStack_1c[0] = *(int *)(iVar1 + 0x14);
  aiStack_1c[1] = *(undefined4 *)(iVar1 + 0x18);
  aiStack_1c[2] = *(undefined4 *)(iVar1 + 0x1c);
  aiStack_1c[3] = *(undefined4 *)(iVar1 + 0x20);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar1 + 0x24) == 0)) {
    cVar8 = FUN_0066ef90();
    if (cVar8 == '\0') {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    piVar9 = (int *)(param_1 + 0x104);
    do {
      iVar4 = *piVar9;
      iVar5 = *(int *)(param_1 + 0xe8 + iVar4 * 4);
      cVar8 = FUN_0066f050(aiStack_1c[iVar4],
                           *(undefined4 *)(iVar1 + 0x2c + *(int *)(iVar5 + 0x14) * 4),
                           *(undefined4 *)(iVar1 + 0x3c + *(int *)(iVar5 + 0x18) * 4));
      if (cVar8 == '\0') {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar5 = iVar10 * 4;
      iVar10 = iVar10 + 1;
      aiStack_1c[iVar4] = (int)**(short **)(param_2 + iVar5);
      piVar9 = piVar9 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x100));
  }
  **(undefined4 **)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  *(undefined4 *)(iVar1 + 0x10) = uVar7;
  *(int *)(iVar1 + 0x14) = aiStack_1c[0];
  *(int *)(iVar1 + 0x18) = aiStack_1c[1];
  *(ulonglong *)(iVar1 + 0x1c) = CONCAT44(aiStack_1c[3],aiStack_1c[2]);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1U & 7;
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

