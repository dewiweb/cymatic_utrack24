// rea decompile_all
// name: FUN_0048a81a
// address: 0x48a81a
// body: available
// range: 0x48a81a-0x48a9d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a81a(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *unaff_EDI;
  undefined1 local_18;
  int local_10;
  
  puVar4 = (undefined4 *)(**(code **)unaff_EDI[1])();
  unaff_EDI[0x68] = (int)puVar4;
  *puVar4 = &LAB_0048a3ef;
  puVar4[1] = FUN_0048a409;
  *(undefined1 *)(puVar4 + 2) = 0;
  if (*(char *)((int)unaff_EDI + 0x10a) != '\0') {
    *(undefined4 *)(*unaff_EDI + 0x14) = 0x19;
    (**(code **)*unaff_EDI)();
  }
  if (((char)unaff_EDI[0x12] == '\0') || (bVar3 = true, unaff_EDI[0x46] < 2)) {
    bVar3 = false;
  }
  local_10 = 0;
  if (0 < unaff_EDI[9]) {
    puVar8 = puVar4 + 0xd;
    piVar9 = (int *)(unaff_EDI[0x31] + 0x24);
    do {
      iVar5 = (piVar9[-7] * *piVar9) / unaff_EDI[0x46];
      iVar6 = (piVar9[-6] * *piVar9) / unaff_EDI[0x46];
      iVar1 = unaff_EDI[0x45];
      iVar2 = unaff_EDI[0x44];
      puVar8[0xc] = iVar6;
      if ((char)piVar9[3] == '\0') {
        *puVar8 = &LAB_0048a4da;
      }
      else if ((iVar5 == iVar2) && (iVar6 == iVar1)) {
        *puVar8 = &LAB_0048a4cf;
      }
      else {
        if (iVar5 * 2 == iVar2) {
          if (iVar6 == iVar1) {
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar8 = FUN_0048a663;
            }
            else {
              *puVar8 = FUN_0048a59f;
            }
          }
          else {
            if ((iVar5 * 2 != iVar2) || (iVar6 * 2 != iVar1)) goto LAB_0048a949;
            if ((bVar3) && (2 < (uint)piVar9[1])) {
              *puVar8 = FUN_0048a712;
              *(undefined1 *)(puVar4 + 2) = 1;
            }
            else {
              *puVar8 = FUN_0048a5f6;
            }
          }
        }
        else {
LAB_0048a949:
          if ((iVar2 % iVar5 == 0) && (iVar1 % iVar6 == 0)) {
            local_18 = (undefined1)(iVar2 / iVar5);
            *puVar8 = FUN_0048a4e2;
            *(undefined1 *)(local_10 + 0x8c + (int)puVar4) = local_18;
            *(char *)(local_10 + 0x96 + (int)puVar4) = (char)(iVar1 / iVar6);
          }
          else {
            *(undefined4 *)(*unaff_EDI + 0x14) = 0x26;
            (**(code **)*unaff_EDI)();
          }
        }
        FUN_0048e6c7(unaff_EDI[0x45]);
        uVar7 = (**(code **)(unaff_EDI[1] + 8))();
        puVar8[-10] = uVar7;
      }
      local_10 = local_10 + 1;
      puVar8 = puVar8 + 1;
      piVar9 = piVar9 + 0x15;
    } while (local_10 < unaff_EDI[9]);
  }
  return;
}

