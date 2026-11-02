// rea decompile_all
// name: FUN_00458190
// address: 0x458190
// body: available
// range: 0x458190-0x45835c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458190(int param_1,code *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  int iVar6;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined **ppuStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined *local_38;
  undefined4 local_34;
  
  local_38 = &DAT_00c17974;
  local_34 = 0;
  uVar5 = 0x84283380;
  local_54 = (char *)0x4581c4;
  FUN_0044ec90();
  local_54 = "https:";
  local_58 = *(undefined4 *)(in_ECX + 0x10);
  ppuStack_5c = (undefined **)0x4581dc;
  iVar2 = FUN_0045e120();
  if (iVar2 == 0) {
    uVar5 = 0x84a83380;
  }
  local_54 = "j";
  puVar3 = (undefined4 *)FUN_00458890();
  local_54 = (char *)0x0;
  uStack_6c = *puVar3;
  ppuStack_5c = &local_38;
  iStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = *(undefined4 *)(param_1 + 0x2c);
  uStack_70 = *(uint *)(in_ECX + 8);
  local_58 = uVar5;
  iVar2 = HttpOpenRequestW();
  *(int *)(in_ECX + 0xc) = iVar2;
  if (iVar2 != 0) {
    iStack_60 = 0;
    ppuStack_5c = (undefined **)0x4;
    InternetQueryOptionW(iVar2,0x1f,&iStack_60,&ppuStack_5c);
    uStack_70 = uStack_70 | 0x3380;
    InternetSetOptionW(*(undefined4 *)(in_ECX + 0xc),0x1f,&uStack_70,4);
    uStack_70 = 0x28;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    ppuStack_5c = (undefined **)0x0;
    local_58 = 0;
    local_54 = (char *)0x0;
    puVar3 = (undefined4 *)FUN_00458890();
    uStack_68 = *puVar3;
    uStack_64 = FUN_0044ec90();
    local_54 = *(char **)(in_ECX + 0x1c);
    iVar2 = HttpSendRequestExW(*(undefined4 *)(in_ECX + 0xc),&uStack_70,0,8,0);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        iVar4 = *(int *)(in_ECX + 0x1c) - iVar2;
        iVar6 = 0x400;
        if (iVar4 < 0x400) {
          iVar6 = iVar4;
        }
        iStack_60 = 0;
        if ((0 < iVar6) &&
           (iVar4 = InternetWriteFile(*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x18) + iVar2,
                                      iVar6,&iStack_60), iVar4 == 0)) break;
        if ((iVar6 == 0) || (iStack_60 < iVar6)) {
          iVar2 = HttpEndRequestW(*(undefined4 *)(in_ECX + 0xc),0,0,0);
          if (iVar2 != 0) {
            return;
          }
          break;
        }
        iVar2 = iVar2 + iStack_60;
      } while ((param_2 == (code *)0x0) ||
              (cVar1 = (*param_2)(param_3,iVar2,*(undefined4 *)(in_ECX + 0x1c)), cVar1 != '\0'));
    }
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    InternetCloseHandle(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    InternetCloseHandle(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}

