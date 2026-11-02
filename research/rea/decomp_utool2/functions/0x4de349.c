// rea decompile_all
// name: FUN_004de349
// address: 0x4de349
// body: available
// range: 0x4de349-0x4de4d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4de4d8 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_004de349(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_2 == (int *)0x0) {
    piVar6 = __errno();
    iVar8 = 0x16;
    *piVar6 = 0x16;
    FUN_004d0d1c();
  }
  else {
    *param_2 = 0;
    local_24 = (undefined4 *)0x0;
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    iVar8 = *param_1;
    puVar12 = local_24;
    puVar4 = local_20;
    while (local_24 = puVar12, local_20 = puVar4, iVar8 != 0) {
      uVar5 = (uint)local_8 >> 0x18;
      local_8 = (char *)CONCAT13((char)uVar5,0x3f2a);
      pcVar7 = _strpbrk((char *)*param_1,(char *)&local_8);
      if (pcVar7 == (char *)0x0) {
        iVar8 = FUN_004de4d9(*param_1,0,0,&local_24);
      }
      else {
        iVar8 = expand_argument_wildcards<>(*param_1,pcVar7,&local_24);
      }
      if (iVar8 != 0) goto LAB_004de4bb;
      param_1 = param_1 + 1;
      puVar12 = local_24;
      puVar4 = local_20;
      iVar8 = *param_1;
    }
    local_c = (char *)0x0;
    local_8 = (char *)0x0;
    local_10 = ((int)puVar4 - (int)puVar12 >> 2) + 1;
    pcVar7 = (char *)(~-(uint)(puVar4 < puVar12) & ((int)puVar4 - (int)puVar12) + 3U >> 2);
    if (pcVar7 != (char *)0x0) {
      local_8 = (char *)0x0;
      puVar11 = puVar12;
      do {
        pcVar10 = (char *)*puVar11;
        pcVar1 = pcVar10 + 1;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        local_8 = pcVar10 + (int)(local_8 + (1 - (int)pcVar1));
        puVar11 = puVar11 + 1;
        local_c = local_c + 1;
      } while (local_c != pcVar7);
    }
    iVar9 = ___acrt_allocate_buffer_for_argv(local_10,local_8,1);
    if (iVar9 == 0) {
      iVar8 = -1;
    }
    else {
      local_10 = iVar9 + local_10 * 4;
      local_14 = local_10;
      if (puVar12 != puVar4) {
        local_18 = iVar9 - (int)puVar12;
        do {
          local_c = (char *)*puVar12;
          pcVar7 = local_c + 1;
          do {
            cVar2 = *local_c;
            local_c = local_c + 1;
          } while (cVar2 != '\0');
          local_c = local_c + (1 - (int)pcVar7);
          iVar8 = FUN_004db41b(local_10,local_8 + (local_14 - local_10),*puVar12,local_c);
          if (iVar8 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          *(int *)(local_18 + (int)puVar12) = local_10;
          puVar12 = puVar12 + 1;
          local_10 = local_10 + (int)local_c;
        } while (puVar12 != puVar4);
      }
      iVar8 = 0;
      *param_2 = iVar9;
    }
    FID_conflict__free((void *)0x0);
LAB_004de4bb:
    ~argument_list<>();
  }
  return iVar8;
}

