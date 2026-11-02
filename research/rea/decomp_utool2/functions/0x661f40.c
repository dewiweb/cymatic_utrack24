// rea decompile_all
// name: FUN_00661f40
// address: 0x661f40
// body: available
// range: 0x661f40-0x662127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00661f40(void)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_1c;
  
  puVar3 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x68] = (int)puVar3;
  *puVar3 = FUN_00662650;
  puVar3[1] = FUN_00662560;
  *(undefined1 *)(puVar3 + 2) = 0;
  if (*(char *)((int)in_ECX + 0x10a) != '\0') {
    *(undefined4 *)(*in_ECX + 0x14) = 0x19;
    (**(code **)*in_ECX)();
  }
  if (((char)in_ECX[0x12] == '\0') || (bVar2 = true, in_ECX[0x46] < 2)) {
    bVar2 = false;
  }
  local_1c = 0;
  if (0 < in_ECX[9]) {
    piVar7 = (int *)(in_ECX[0x31] + 0x24);
    puVar8 = puVar3 + 0xd;
    do {
      iVar4 = (piVar7[-7] * *piVar7) / in_ECX[0x46];
      iVar5 = (piVar7[-6] * *piVar7) / in_ECX[0x46];
      iVar9 = in_ECX[0x45];
      iVar1 = in_ECX[0x44];
      puVar8[0xc] = iVar5;
      if ((char)piVar7[3] == '\0') {
        *puVar8 = FUN_00662540;
      }
      else if ((iVar4 == iVar1) && (iVar5 == iVar9)) {
        *puVar8 = FUN_00662550;
      }
      else {
        if (iVar4 * 2 == iVar1) {
          if (iVar5 == iVar9) {
            if ((bVar2) && (2 < (uint)piVar7[1])) {
              *puVar8 = FUN_00662260;
            }
            else {
              *puVar8 = FUN_006623b0;
            }
          }
          else {
            if (iVar5 * 2 != iVar9) goto LAB_00662083;
            if ((bVar2) && (2 < (uint)piVar7[1])) {
              *puVar8 = FUN_00662130;
              *(undefined1 *)(puVar3 + 2) = 1;
            }
            else {
              *puVar8 = FUN_00662330;
            }
          }
        }
        else {
LAB_00662083:
          if ((iVar1 % iVar4 == 0) && (iVar9 % iVar5 == 0)) {
            *puVar8 = FUN_00662410;
            *(char *)(local_1c + 0x8c + (int)puVar3) = (char)(iVar1 / iVar4);
            *(char *)(local_1c + 0x96 + (int)puVar3) = (char)(iVar9 / iVar5);
          }
          else {
            *(undefined4 *)(*in_ECX + 0x14) = 0x26;
            (**(code **)*in_ECX)(in_ECX);
          }
        }
        iVar9 = in_ECX[0x17] + -1 + in_ECX[0x44];
        uVar6 = (**(code **)(in_ECX[1] + 8))(in_ECX,1,iVar9 - iVar9 % in_ECX[0x44],in_ECX[0x45]);
        puVar8[-10] = uVar6;
      }
      piVar7 = piVar7 + 0x15;
      local_1c = local_1c + 1;
      puVar8 = puVar8 + 1;
    } while (local_1c < in_ECX[9]);
  }
  return;
}

