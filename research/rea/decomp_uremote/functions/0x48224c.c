// rea decompile_all
// name: FUN_0048224c
// address: 0x48224c
// body: available
// range: 0x48224c-0x482577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048224c(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  bool bVar5;
  int local_a3c [640];
  int *local_3c;
  uint *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (unaff_ESI[0x2a] < 1) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x13;
    *(undefined4 *)(*unaff_ESI + 0x18) = 0;
    (**(code **)*unaff_ESI)();
  }
  piVar2 = (int *)unaff_ESI[0x2b];
  if ((piVar2[5] == 0) && (piVar2[6] == 0x3f)) {
    *(undefined1 *)(unaff_ESI + 0x35) = 0;
    if (0 < unaff_ESI[0xf]) {
      _memset(local_14,0,unaff_ESI[0xf]);
    }
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x35) = 1;
    if (0 < unaff_ESI[0xf]) {
      piVar4 = local_a3c;
      for (iVar3 = (unaff_ESI[0xf] & 0xffffffU) << 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = -1;
        piVar4 = piVar4 + 1;
      }
    }
  }
  local_18 = 1;
  if (0 < unaff_ESI[0x2a]) {
    do {
      piVar4 = (int *)*piVar2;
      local_20 = piVar4;
      if (((int)piVar4 < 1) || (4 < (int)piVar4)) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
        *(int **)(*unaff_ESI + 0x18) = piVar4;
        *(undefined4 *)(*unaff_ESI + 0x1c) = 4;
        (**(code **)*unaff_ESI)();
      }
      local_1c = 0;
      if (0 < (int)piVar4) {
        do {
          iVar3 = piVar2[local_1c + 1];
          if ((iVar3 < 0) || (unaff_ESI[0xf] <= iVar3)) {
            *(undefined4 *)(*unaff_ESI + 0x14) = 0x13;
            *(int *)(*unaff_ESI + 0x18) = local_18;
            (**(code **)*unaff_ESI)();
          }
          if ((0 < (int)local_1c) && (iVar3 <= piVar2[local_1c])) {
            *(undefined4 *)(*unaff_ESI + 0x14) = 0x13;
            *(int *)(*unaff_ESI + 0x18) = local_18;
            (**(code **)*unaff_ESI)();
          }
          local_1c = local_1c + 1;
          piVar4 = local_20;
        } while ((int)local_1c < (int)local_20);
      }
      local_1c = piVar2[7];
      local_2c = piVar2[5];
      local_24 = (int *)piVar2[6];
      local_30 = piVar2[8];
      if ((char)unaff_ESI[0x35] == '\0') {
        if ((((local_2c != 0) || (local_24 != (int *)0x3f)) || (local_1c != 0)) || (local_30 != 0))
        {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x11;
          *(int *)(*unaff_ESI + 0x18) = local_18;
          (**(code **)*unaff_ESI)();
        }
        if (0 < (int)piVar4) {
          local_24 = piVar2 + 1;
          local_28 = piVar4;
          do {
            iVar3 = *local_24;
            if (local_14[iVar3] != '\0') {
              *(undefined4 *)(*unaff_ESI + 0x14) = 0x13;
              *(int *)(*unaff_ESI + 0x18) = local_18;
              (**(code **)*unaff_ESI)();
            }
            local_24 = local_24 + 1;
            local_28 = (int *)((int)local_28 + -1);
            local_14[iVar3] = '\x01';
          } while (local_28 != (int *)0x0);
        }
      }
      else {
        if ((((0x3f < local_2c) || ((int)local_24 < (int)local_2c)) ||
            ((0x3f < (int)local_24 || ((10 < local_1c || ((int)local_30 < 0)))))) ||
           (10 < (int)local_30)) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x11;
          *(int *)(*unaff_ESI + 0x18) = local_18;
          (**(code **)*unaff_ESI)();
        }
        if (local_2c == 0) {
          bVar5 = local_24 == (int *)0x0;
        }
        else {
          bVar5 = local_20 == (int *)0x1;
        }
        if (!bVar5) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x11;
          *(int *)(*unaff_ESI + 0x18) = local_18;
          (**(code **)*unaff_ESI)();
        }
        piVar4 = local_20;
        if (0 < (int)local_20) {
          local_20 = piVar2 + 1;
          local_28 = piVar4;
          do {
            local_3c = local_a3c + *local_20 * 0x40;
            uVar1 = local_2c;
            if ((local_2c != 0) && (local_a3c[*local_20 * 0x40] < 0)) {
              *(undefined4 *)(*unaff_ESI + 0x14) = 0x11;
              *(int *)(*unaff_ESI + 0x18) = local_18;
              (**(code **)*unaff_ESI)();
              uVar1 = local_2c;
            }
            while (local_34 = uVar1, (int)uVar1 <= (int)local_24) {
              local_38 = (uint *)(local_3c + uVar1);
              uVar1 = local_3c[uVar1];
              if ((int)uVar1 < 0) {
                bVar5 = local_1c == 0;
LAB_0048245a:
                if (!bVar5) goto LAB_0048245c;
              }
              else {
                if (local_1c == uVar1) {
                  bVar5 = local_30 == local_1c - 1;
                  goto LAB_0048245a;
                }
LAB_0048245c:
                *(undefined4 *)(*unaff_ESI + 0x14) = 0x11;
                *(int *)(*unaff_ESI + 0x18) = local_18;
                (**(code **)*unaff_ESI)();
              }
              *local_38 = local_30;
              uVar1 = local_34 + 1;
            }
            local_20 = local_20 + 1;
            local_28 = (int *)((int)local_28 + -1);
          } while (local_28 != (int *)0x0);
        }
      }
      piVar2 = piVar2 + 9;
      local_18 = local_18 + 1;
    } while (local_18 <= unaff_ESI[0x2a]);
  }
  iVar3 = 0;
  if ((char)unaff_ESI[0x35] == '\0') {
    if (0 < unaff_ESI[0xf]) {
      do {
        if (local_14[iVar3] == '\0') {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x2d;
          (**(code **)*unaff_ESI)();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < unaff_ESI[0xf]);
    }
  }
  else {
    iVar3 = 0;
    if (0 < unaff_ESI[0xf]) {
      piVar2 = local_a3c;
      do {
        if (*piVar2 < 0) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x2d;
          (**(code **)*unaff_ESI)();
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x40;
      } while (iVar3 < unaff_ESI[0xf]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

