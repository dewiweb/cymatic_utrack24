// rea decompile_all
// name: FUN_00488b4d
// address: 0x488b4d
// body: available
// range: 0x488b4d-0x488d2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488b4d(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_ESI;
  int iVar6;
  int local_c;
  int local_8;
  
  if (unaff_ESI[5] != 0xca) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x14;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[5];
    (**(code **)*unaff_ESI)();
  }
  iVar3 = unaff_ESI[0xc];
  uVar1 = unaff_ESI[0xd];
  if (uVar1 < (uint)(iVar3 << 3)) {
    if (uVar1 < (uint)(iVar3 << 2)) {
      if (uVar1 < (uint)(iVar3 * 2)) {
        unaff_ESI[0x17] = unaff_ESI[7];
        iVar3 = unaff_ESI[8];
        unaff_ESI[0x46] = 8;
      }
      else {
        iVar3 = FUN_0048e6bf();
        unaff_ESI[0x17] = iVar3;
        iVar3 = FUN_0048e6bf();
        unaff_ESI[0x46] = 4;
      }
    }
    else {
      iVar3 = FUN_0048e6bf();
      unaff_ESI[0x17] = iVar3;
      iVar3 = FUN_0048e6bf();
      unaff_ESI[0x46] = 2;
    }
  }
  else {
    iVar3 = FUN_0048e6bf();
    unaff_ESI[0x17] = iVar3;
    iVar3 = FUN_0048e6bf();
    unaff_ESI[0x46] = 1;
  }
  local_c = 0;
  unaff_ESI[0x18] = iVar3;
  if (0 < unaff_ESI[9]) {
    piVar4 = (int *)(unaff_ESI[0x31] + 0xc);
    do {
      iVar3 = unaff_ESI[0x46];
      local_8 = iVar3;
      if (iVar3 < 8) {
        do {
          if ((unaff_ESI[0x44] * iVar3 < piVar4[-1] * local_8 * 2) ||
             (unaff_ESI[0x45] * iVar3 < *piVar4 * local_8 * 2)) break;
          local_8 = local_8 * 2;
        } while (local_8 < 8);
      }
      local_c = local_c + 1;
      piVar4[6] = local_8;
      piVar4 = piVar4 + 0x15;
    } while (local_c < unaff_ESI[9]);
  }
  local_c = 0;
  if (0 < unaff_ESI[9]) {
    iVar3 = unaff_ESI[0x31] + 0x24;
    do {
      uVar5 = FUN_0048e6bf();
      *(undefined4 *)(iVar3 + 4) = uVar5;
      uVar5 = FUN_0048e6bf();
      local_c = local_c + 1;
      *(undefined4 *)(iVar3 + 8) = uVar5;
      iVar3 = iVar3 + 0x54;
    } while (local_c < unaff_ESI[9]);
  }
  iVar3 = unaff_ESI[0xb];
  iVar6 = 1;
  if (iVar3 == 1) {
    unaff_ESI[0x19] = 1;
    goto LAB_00488d01;
  }
  if (1 < iVar3) {
    if (iVar3 < 4) {
      unaff_ESI[0x19] = 3;
      goto LAB_00488d01;
    }
    if (iVar3 < 6) {
      unaff_ESI[0x19] = 4;
      goto LAB_00488d01;
    }
  }
  unaff_ESI[0x19] = unaff_ESI[9];
LAB_00488d01:
  if (*(char *)((int)unaff_ESI + 0x4a) == '\0') {
    iVar6 = unaff_ESI[0x19];
  }
  unaff_ESI[0x1a] = iVar6;
  cVar2 = FUN_00488adc();
  if (cVar2 == '\0') {
    unaff_ESI[0x1b] = 1;
  }
  else {
    unaff_ESI[0x1b] = unaff_ESI[0x45];
  }
  return;
}

