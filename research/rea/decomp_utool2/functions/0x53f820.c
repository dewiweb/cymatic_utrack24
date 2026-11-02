// rea decompile_all
// name: FUN_0053f820
// address: 0x53f820
// body: available
// range: 0x53f820-0x53f9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f820(undefined4 param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [28];
  int local_14;
  uint local_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_3c;
  local_3c = in_ECX;
  FUN_0053b670(&local_38,param_1);
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x5c));
  }
  switch(*(undefined4 *)(in_ECX + 0x28)) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  }
  uVar8 = FUN_006f55d0();
  uVar7 = (uint)(uVar8 >> 0x20);
  if (uVar8 != 0) {
    uVar6 = (int)(uVar8 >> 0x1f) * 0x1000;
    lVar1 = uVar8 + CONCAT44(((int)((uVar8 >> 0x1f) >> 0x20) << 0xc | (uVar7 & 0x7fffffff) >> 0x13)
                             + (uint)(0xffffc7ff < uVar6),uVar6 + 0x3800);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    if (**(char **)(local_3c + 100) != '\0') {
      puVar2 = (undefined4 *)FUN_00458890();
      DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
      if ((DVar3 & 0x10) == 0) {
        puVar2 = (undefined4 *)FUN_00458890();
        BVar4 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_30);
        if (BVar4 == 0) {
          local_38 = 0;
        }
        else {
          uVar7 = uVar7 + local_14 + (uint)CARRY4(local_10,(uint)lVar1);
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_3c,uVar7);
  return;
}

