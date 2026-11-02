// rea decompile_all
// name: FUN_005e2d50
// address: 0x5e2d50
// body: available
// range: 0x5e2d50-0x5e2e50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e2d50(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  char *in_EDX;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  int aiStack_38 [3];
  int local_14;
  int local_c;
  
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  pcVar1 = in_EDX + 1;
  pcVar8 = in_EDX;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  aiStack_38[2] = 0x5e2d89;
  iVar4 = -(int)(pcVar8 + (2 - (int)pcVar1));
  iVar3 = iVar4 - (int)in_EDX;
  do {
    cVar2 = *in_EDX;
    in_EDX = in_EDX + 1;
    in_EDX[(int)aiStack_38 + iVar3 + 0xb] = cVar2;
  } while (cVar2 != '\0');
  puVar11 = (undefined2 *)((int)aiStack_38 + iVar4 + 0xb);
  do {
    pcVar10 = (char *)((int)puVar11 + 1);
    puVar11 = (undefined2 *)((int)puVar11 + 1);
  } while (*pcVar10 != '\0');
  *puVar11 = 0x3d;
  local_c = 0;
  if (0 < in_ECX[2]) {
    do {
      iVar9 = 0;
      iVar3 = *(int *)(*in_ECX + local_c * 4);
      if (0 < (int)(pcVar8 + (1 - (int)pcVar1))) {
        pcVar10 = &stack0xffffffd4 + iVar4;
        do {
          *(int *)((int)aiStack_38 + iVar4 + 8) =
               (int)pcVar10[iVar3 - (int)(&stack0xffffffd4 + iVar4)];
          *(undefined4 *)((int)aiStack_38 + iVar4 + 4) = 0x5e2de0;
          iVar6 = _toupper(*(int *)((int)aiStack_38 + iVar4 + 8));
          *(int *)((int)aiStack_38 + iVar4 + 4) = (int)*pcVar10;
          *(undefined4 *)((int)aiStack_38 + iVar4) = 0x5e2deb;
          iVar7 = _toupper(*(int *)((int)aiStack_38 + iVar4 + 4));
          if (iVar6 != iVar7) goto LAB_005e2e11;
          iVar9 = iVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (iVar9 < (int)(pcVar8 + (1 - (int)pcVar1)));
      }
      if (local_14 == 0) {
        __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_14 = local_14 + 1;
LAB_005e2e11:
      local_c = local_c + 1;
    } while (local_c < in_ECX[2]);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

