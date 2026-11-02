// rea decompile_all
// name: FUN_005c08e0
// address: 0x5c08e0
// body: available
// range: 0x5c08e0-0x5c0a62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c08e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))(param_1);
  iVar1 = *(int *)*param_1;
  iVar7 = *(int *)(in_ECX + 0x14);
  do {
    if (iVar1 <= iVar7) {
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar6 = *param_1;
          iVar3 = param_1[1];
          *(undefined1 *)(iVar6 + 0x94) = 0;
          FUN_005c63d0(*(int *)(*(int *)(iVar6 + 0xc) + iVar7 * 4) + iVar3 * 4,param_1[2]);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      return;
    }
    puVar4 = operator_new(0x24);
    piVar2 = (int *)**(undefined4 **)(in_ECX + 0xc);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(char *)(puVar4 + 8) = (char)piVar2[8];
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 1;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 != 0) {
      iVar7 = 0x13;
      do {
        LOCK();
        iVar6 = *piVar2;
        if (iVar6 == 0) {
          *piVar2 = 1;
          iVar6 = 0;
        }
        UNLOCK();
        if (iVar6 == 0) goto LAB_005c098c;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      LOCK();
      iVar7 = *piVar2;
      if (iVar7 == 0) {
        *piVar2 = 1;
        iVar7 = 0;
      }
      UNLOCK();
      while (iVar7 != 0) {
        Sleep(0);
        LOCK();
        iVar7 = *piVar2;
        if (iVar7 == 0) {
          *piVar2 = 1;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
LAB_005c098c:
    iVar7 = piVar2[2];
    iVar6 = piVar2[3];
    iVar3 = piVar2[4];
    puVar4[1] = piVar2[1];
    puVar4[2] = iVar7;
    puVar4[3] = iVar6;
    puVar4[4] = iVar3;
    puVar4[5] = piVar2[5];
    LOCK();
    *piVar2 = 0;
    UNLOCK();
    iVar7 = *(int *)(in_ECX + 0x14);
    iVar6 = iVar7 + 1;
    if ((int)*(uint *)(in_ECX + 0x10) < iVar6) {
      if (iVar6 < 0) {
        iVar6 = iVar7 + 2;
      }
      uVar8 = iVar7 + 9 + (iVar6 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 0x10) != uVar8) {
        if ((int)uVar8 < 1) {
          FID_conflict__free(*(void **)(in_ECX + 0xc));
          *(undefined4 *)(in_ECX + 0xc) = 0;
        }
        else if (*(int *)(in_ECX + 0xc) == 0) {
          uVar5 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        else {
          uVar5 = FUN_004c553b(*(int *)(in_ECX + 0xc),uVar8 * 4);
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        *(uint *)(in_ECX + 0x10) = uVar8;
      }
    }
    iVar7 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar7 + 1;
    *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar7 * 4) = puVar4;
    iVar7 = *(int *)(in_ECX + 0x14);
  } while( true );
}

