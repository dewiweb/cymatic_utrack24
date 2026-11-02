// rea decompile_all
// name: FUN_00698d60
// address: 0x698d60
// body: available
// range: 0x698d60-0x698f2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00698e29) */

void FUN_00698d60(int param_1)

{
  undefined4 *lParam;
  int iVar1;
  BOOL BVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722006;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = param_1;
  if (param_1 < *(int *)(in_ECX + 0x80)) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(in_ECX + 0x78) + iVar5 * 4) + 8) & 1) != 0) {
        FUN_006aea80();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x80));
  }
  FUN_006ae910();
  if (param_1 < *(int *)(in_ECX + 0x80)) {
    do {
      iVar5 = *(int *)(*(int *)(in_ECX + 0x78) + param_1 * 4);
      if ((*(byte *)(iVar5 + 8) & 1) != 0) {
        fVar6 = (float10)FUN_006f9790();
        iVar3 = (int)fVar6;
        iVar1 = *(int *)(iVar5 + 0x10);
        if ((*(int *)(iVar5 + 0x10) <= iVar3) && (iVar1 = iVar3, *(int *)(iVar5 + 0x14) < iVar3)) {
          iVar1 = *(int *)(iVar5 + 0x14);
        }
        if (iVar1 != *(int *)(iVar5 + 0xc)) {
          *(int *)(iVar5 + 0xc) = iVar1;
          FUN_006e6400(&stack0xffffffac);
          FUN_006ce9f0(1);
          *(undefined1 *)(in_ECX + 0x95) = 1;
          piVar4 = (int *)(*(int *)(in_ECX + 0x74) + 0xc);
          LOCK();
          iVar5 = *piVar4;
          if (iVar5 == 0) {
            *piVar4 = 1;
            iVar5 = 0;
          }
          UNLOCK();
          if (iVar5 == 0) {
            lParam = *(undefined4 **)(in_ECX + 0x74);
            if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
              LOCK();
              lParam[1] = lParam[1] + 1;
              UNLOCK();
              BVar2 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
              if (BVar2 != 0) goto LAB_00698f01;
            }
            if (lParam != (undefined4 *)0x0) {
              piVar4 = lParam + 1;
              LOCK();
              *piVar4 = *piVar4 + 1;
              UNLOCK();
              LOCK();
              iVar5 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*lParam)();
              }
            }
            LOCK();
            *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc) = 0;
            UNLOCK();
          }
        }
      }
LAB_00698f01:
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(in_ECX + 0x80));
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

