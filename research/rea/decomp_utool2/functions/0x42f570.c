// rea decompile_all
// name: FUN_0042f570
// address: 0x42f570
// body: available
// range: 0x42f570-0x42f731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0042f688) */
/* WARNING: Removing unreachable block (ram,0x0042f69f) */
/* WARNING: Removing unreachable block (ram,0x0042f6ae) */
/* WARNING: Removing unreachable block (ram,0x0042f6be) */

void FUN_0042f570(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  double *pdVar4;
  void *local_44;
  int local_3c;
  int local_38 [10];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fdfc8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (void *)0x0;
  local_3c = 0;
  local_8 = 0;
  local_38[9] = uVar1;
  if (*(int *)(in_ECX + 0x24) != 0) {
    iVar3 = 0;
    local_38[0] = 32000;
    local_38[1] = 0xac44;
    local_38[2] = 48000;
    local_38[3] = 0x15888;
    local_38[8] = 0x5dc00;
    local_38[4] = 96000;
    local_38[5] = 0x2b110;
    local_38[6] = 0x2ee00;
    local_38[7] = 0x56220;
    do {
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x30))((double)local_38[iVar3],uVar1);
      if (iVar2 == 0) {
        if (0 < local_3c + 1) {
          FUN_00411870();
        }
        iVar2 = local_3c + 1;
        pdVar4 = (double *)(local_3c * 8);
        local_3c = iVar2;
        if (pdVar4 != (double *)0x0) {
          *pdVar4 = (double)local_38[iVar3];
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    if (local_3c != 0) goto LAB_0042f6ca;
  }
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))();
LAB_0042f6ca:
  if (*(int *)(in_ECX + 0x74) == local_3c) {
    iVar3 = *(int *)(in_ECX + 0x74) + -1;
    if (-1 < iVar3) {
      pdVar4 = (double *)(iVar3 * 8);
      do {
        if (*(double *)(*(int *)(in_ECX + 0x6c) + (int)pdVar4) != *pdVar4) goto LAB_0042f6fc;
        pdVar4 = pdVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  else {
LAB_0042f6fc:
    local_44 = *(void **)(in_ECX + 0x6c);
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    *(undefined4 *)(in_ECX + 0x70) = 0;
    *(int *)(in_ECX + 0x74) = local_3c;
  }
  FID_conflict__free(local_44);
  ExceptionList = local_10;
  __security_check_cookie(local_38[9] ^ (uint)&stack0xfffffffc);
  return;
}

