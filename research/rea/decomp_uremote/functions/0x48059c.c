// rea decompile_all
// name: FUN_0048059c
// address: 0x48059c
// body: available
// range: 0x48059c-0x48072a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048059c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_ESI;
  bool bVar3;
  
  puVar2 = (undefined4 *)(**(code **)unaff_ESI[1])();
  unaff_ESI[0x54] = (int)puVar2;
  *puVar2 = FUN_0041f3a2;
  iVar1 = unaff_ESI[10];
  if (iVar1 == 1) {
    bVar3 = unaff_ESI[9] == 1;
LAB_004805e4:
    if (!bVar3) {
LAB_004805e6:
      *(undefined4 *)(*unaff_ESI + 0x14) = 9;
      (**(code **)*unaff_ESI)();
    }
  }
  else {
    if (1 < iVar1) {
      if (iVar1 < 4) {
        bVar3 = unaff_ESI[9] == 3;
      }
      else {
        if (5 < iVar1) goto LAB_004805da;
        bVar3 = unaff_ESI[9] == 4;
      }
      goto LAB_004805e4;
    }
LAB_004805da:
    if (unaff_ESI[9] < 1) goto LAB_004805e6;
  }
  iVar1 = unaff_ESI[0x10];
  if (iVar1 == 1) {
    if (unaff_ESI[0xf] != 1) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 10;
      (**(code **)*unaff_ESI)();
    }
    iVar1 = unaff_ESI[10];
    if (iVar1 == 1) {
LAB_0048071f:
      puVar2[1] = FUN_004804e4;
      return;
    }
    if (iVar1 == 2) {
      *puVar2 = FUN_00480172;
      puVar2[1] = FUN_00480330;
      return;
    }
    if (iVar1 == 3) goto LAB_0048071f;
LAB_0048066b:
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x1b;
    (**(code **)*unaff_ESI)();
  }
  else {
    if (iVar1 == 2) {
      if (unaff_ESI[0xf] != 3) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 10;
        (**(code **)*unaff_ESI)();
      }
      bVar3 = unaff_ESI[10] == 2;
LAB_00480669:
      if (!bVar3) goto LAB_0048066b;
    }
    else {
      if (iVar1 == 3) {
        if (unaff_ESI[0xf] != 3) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 10;
          (**(code **)*unaff_ESI)();
        }
        if (unaff_ESI[10] == 2) {
          *puVar2 = FUN_00480172;
          puVar2[1] = FUN_00480236;
          return;
        }
        bVar3 = unaff_ESI[10] == 3;
        goto LAB_00480669;
      }
      if (iVar1 == 4) {
        if (unaff_ESI[0xf] != 4) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 10;
          (**(code **)*unaff_ESI)();
        }
        bVar3 = unaff_ESI[10] == 4;
        goto LAB_00480669;
      }
      if (iVar1 == 5) {
        if (unaff_ESI[0xf] != 4) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 10;
          (**(code **)*unaff_ESI)();
        }
        if (unaff_ESI[10] == 4) {
          *puVar2 = FUN_00480172;
          puVar2[1] = FUN_004803b1;
          return;
        }
        bVar3 = unaff_ESI[10] == 5;
        goto LAB_00480669;
      }
      if ((iVar1 != unaff_ESI[10]) || (unaff_ESI[0xf] != unaff_ESI[9])) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x1b;
        (**(code **)*unaff_ESI)();
      }
    }
    puVar2[1] = FUN_00480537;
  }
  return;
}

