// rea decompile_all
// name: FUN_0052db40
// address: 0x52db40
// body: available
// range: 0x52db40-0x52dcca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052db40(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c8cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  iVar3 = *(int *)(in_ECX + 0xe4);
  if (*(int *)(in_ECX + 0xe4) != 0) {
LAB_0052db80:
    iVar7 = iVar3;
    uVar6 = 0;
    if (0 < *(int *)(iVar7 + 0x14)) {
      bVar8 = *(int *)(iVar7 + 0x14) != 0;
      do {
        if (bVar8) {
          iVar3 = *(int *)(*(int *)(iVar7 + 0xc) + uVar6 * 4);
        }
        else {
          iVar3 = 0;
        }
        FUN_00530500();
        local_8 = 0;
        cVar2 = FUN_00635500();
        if (cVar2 == '\0') {
          piVar4 = (int *)FUN_00530500();
          bVar1 = true;
          if (*param_1 == *piVar4) goto LAB_0052dbf6;
          iVar5 = FUN_0045c1e0(*param_1);
          bVar8 = false;
          if (iVar5 == 0) goto LAB_0052dbf6;
        }
        else {
LAB_0052dbf6:
          bVar8 = true;
        }
        if (bVar1) {
          bVar1 = false;
          piVar4 = (int *)(local_20 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar4);
            }
          }
        }
        local_8 = 0xffffffff;
        piVar4 = (int *)(local_24 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        if (bVar8) goto LAB_0052db80;
        uVar6 = uVar6 + 1;
        bVar8 = uVar6 < *(uint *)(iVar7 + 0x14);
        if ((int)*(uint *)(iVar7 + 0x14) <= (int)uVar6) break;
      } while( true );
    }
    FUN_006dff00(1,1);
    do {
      uVar6 = *(uint *)(iVar7 + 0x34) & 3;
      if (uVar6 == 0) {
        if ((*(int *)(iVar7 + 4) == 0) || (*(char *)(*(int *)(iVar7 + 4) + 0xac) == '\0')) {
LAB_0052dc9e:
          FUN_006dffc0();
        }
      }
      else if (uVar6 != 2) goto LAB_0052dc9e;
      iVar7 = *(int *)(iVar7 + 8);
    } while (iVar7 != 0);
    FUN_006e08e0();
  }
  ExceptionList = local_10;
  return;
}

