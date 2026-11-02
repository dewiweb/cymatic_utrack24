// rea decompile_all
// name: FUN_0053f5c0
// address: 0x53f5c0
// body: available
// range: 0x53f5c0-0x53f747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0053f5c0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  uint uVar6;
  undefined8 uVar7;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e54f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    do {
      if ((uVar6 < *(uint *)(in_ECX + 0x5c)) && (*(int *)(*(int *)(in_ECX + 0x54) + uVar6 * 4) != 0)
         ) {
        uVar7 = FUN_00411300(&local_18);
        local_14 = (uint)((ulonglong)uVar7 >> 0x20) | 1;
        if (*(char *)*(undefined4 *)uVar7 == '\0') goto LAB_0053f63b;
        bVar2 = true;
      }
      else {
LAB_0053f63b:
        bVar2 = false;
      }
      if ((local_14 & 1) != 0) {
        local_14 = local_14 & 0xfffffffe;
        piVar5 = (int *)(local_18 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      if (bVar2) {
        puVar3 = (undefined4 *)FUN_005406d0(&local_1c);
        local_8 = 0;
        if (*(char *)*puVar3 == '\0') {
LAB_0053f6b3:
          bVar2 = false;
        }
        else {
          puVar3 = (undefined4 *)FUN_00458890();
          DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
          if ((DVar4 & 0x10) != 0) goto LAB_0053f6b3;
          bVar2 = true;
        }
        local_8 = 0xffffffff;
        piVar5 = (int *)(local_1c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if (!bVar2) {
          if (uVar6 < *(uint *)(in_ECX + 0x5c)) {
            FUN_005406d0(param_1);
            ExceptionList = local_10;
            return extraout_EDX;
          }
          FUN_005406d0(param_1);
          ExceptionList = local_10;
          return extraout_EDX_00;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(in_ECX + 0x5c));
  }
  piVar5 = (int *)(PTR_DAT_00c7ed54 + -8);
  *param_1 = PTR_DAT_00c7ed54;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return param_1;
}

