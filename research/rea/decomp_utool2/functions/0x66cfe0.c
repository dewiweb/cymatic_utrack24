// rea decompile_all
// name: FUN_0066cfe0
// address: 0x66cfe0
// body: available
// range: 0x66cfe0-0x66d0e5 inclusive
// range: 0x66d0f0-0x66d426 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x66d426 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066cfe0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *in_ECX;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  int *local_a20;
  int local_a1c;
  int local_a18;
  uint local_a14 [640];
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x2a] < 1) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x13;
    *(undefined4 *)(*in_ECX + 0x18) = 0;
    (**(code **)*in_ECX)();
  }
  local_a20 = (int *)in_ECX[0x2b];
  if ((local_a20[5] == 0) && (local_a20[6] == 0x3f)) {
    iVar8 = in_ECX[0xf];
    uVar7 = 0;
    *(undefined1 *)(in_ECX + 0x35) = 0;
    if (0 < iVar8) {
      do {
        if (9 < uVar7) {
          ___report_rangecheckfailure();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_14[uVar7] = '\0';
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar8);
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x35) = 1;
    if (0 < in_ECX[0xf]) {
      puVar9 = local_a14;
      for (iVar8 = (in_ECX[0xf] & 0xffffffU) << 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
    }
  }
  local_a18 = 1;
  if (0 < in_ECX[0x2a]) {
    do {
      local_a1c = *local_a20;
      if ((local_a1c < 1) || (4 < local_a1c)) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x1a;
        *(int *)(*in_ECX + 0x18) = local_a1c;
        *(undefined4 *)(*in_ECX + 0x1c) = 4;
        (**(code **)*in_ECX)();
      }
      iVar8 = 0;
      if (0 < local_a1c) {
        do {
          iVar1 = local_a20[iVar8 + 1];
          if ((iVar1 < 0) || (in_ECX[0xf] <= iVar1)) {
            *(undefined4 *)(*in_ECX + 0x14) = 0x13;
            *(int *)(*in_ECX + 0x18) = local_a18;
            (**(code **)*in_ECX)();
          }
          if ((0 < iVar8) && (iVar1 <= local_a20[iVar8])) {
            *(undefined4 *)(*in_ECX + 0x14) = 0x13;
            *(int *)(*in_ECX + 0x18) = local_a18;
            (**(code **)*in_ECX)();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_a1c);
      }
      uVar7 = local_a20[5];
      iVar8 = local_a20[6];
      uVar2 = local_a20[8];
      uVar3 = local_a20[7];
      if ((char)in_ECX[0x35] == '\0') {
        if ((((uVar7 != 0) || (iVar8 != 0x3f)) || (uVar3 != 0)) || (uVar2 != 0)) {
          *(undefined4 *)(*in_ECX + 0x14) = 0x11;
          *(int *)(*in_ECX + 0x18) = local_a18;
          (**(code **)*in_ECX)();
        }
        piVar5 = local_a20;
        if (0 < local_a1c) {
          do {
            iVar8 = piVar5[1];
            if (local_14[iVar8] != '\0') {
              *(undefined4 *)(*in_ECX + 0x14) = 0x13;
              *(int *)(*in_ECX + 0x18) = local_a18;
              (**(code **)*in_ECX)();
            }
            local_14[iVar8] = '\x01';
            local_a1c = local_a1c + -1;
            piVar5 = piVar5 + 1;
          } while (local_a1c != 0);
        }
      }
      else {
        if ((((0x3f < uVar7) || (iVar8 < (int)uVar7)) ||
            ((0x3f < iVar8 || ((10 < uVar3 || ((int)uVar2 < 0)))))) || (10 < (int)uVar2)) {
          *(undefined4 *)(*in_ECX + 0x14) = 0x11;
          *(int *)(*in_ECX + 0x18) = local_a18;
          (**(code **)*in_ECX)();
        }
        if (uVar7 == 0) {
          if (iVar8 != 0) {
LAB_0066d1eb:
            *(undefined4 *)(*in_ECX + 0x14) = 0x11;
            *(int *)(*in_ECX + 0x18) = local_a18;
            (**(code **)*in_ECX)();
          }
        }
        else if (local_a1c != 1) goto LAB_0066d1eb;
        piVar5 = local_a20;
        if (0 < local_a1c) {
          do {
            puVar9 = local_a14 + piVar5[1] * 0x40;
            uVar6 = uVar7;
            if ((uVar7 != 0) && ((int)*puVar9 < 0)) {
              *(undefined4 *)(*in_ECX + 0x14) = 0x11;
              *(int *)(*in_ECX + 0x18) = local_a18;
              (**(code **)*in_ECX)();
            }
            for (; (int)uVar6 <= iVar8; uVar6 = uVar6 + 1) {
              if ((int)puVar9[uVar6] < 0) {
                bVar10 = uVar3 == 0;
LAB_0066d298:
                if (!bVar10) goto LAB_0066d29a;
              }
              else {
                if (uVar3 == puVar9[uVar6]) {
                  bVar10 = uVar2 == uVar3 - 1;
                  goto LAB_0066d298;
                }
LAB_0066d29a:
                *(undefined4 *)(*in_ECX + 0x14) = 0x11;
                *(int *)(*in_ECX + 0x18) = local_a18;
                (**(code **)*in_ECX)();
              }
              puVar9[uVar6] = uVar2;
            }
            local_a1c = local_a1c + -1;
            piVar5 = piVar5 + 1;
          } while (local_a1c != 0);
        }
      }
      local_a18 = local_a18 + 1;
      local_a20 = local_a20 + 9;
    } while (local_a18 <= in_ECX[0x2a]);
  }
  if ((char)in_ECX[0x35] == '\0') {
    iVar8 = 0;
    if (0 < in_ECX[0xf]) {
      do {
        if (local_14[iVar8] == '\0') {
          *(undefined4 *)(*in_ECX + 0x14) = 0x2d;
          (**(code **)*in_ECX)();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < in_ECX[0xf]);
    }
  }
  else {
    iVar8 = 0;
    if (0 < in_ECX[0xf]) {
      puVar9 = local_a14;
      do {
        if ((int)*puVar9 < 0) {
          *(undefined4 *)(*in_ECX + 0x14) = 0x2d;
          (**(code **)*in_ECX)();
        }
        iVar8 = iVar8 + 1;
        puVar9 = puVar9 + 0x40;
      } while (iVar8 < in_ECX[0xf]);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

