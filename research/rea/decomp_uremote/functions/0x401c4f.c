// rea decompile_all
// name: FUN_00401c4f
// address: 0x401c4f
// body: available
// range: 0x401c4f-0x401ded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401c4f(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar6 = *(undefined4 **)(in_EAX + 0x28);
  puVar2 = *(ushort **)(in_EAX + 0x1c);
  puVar8 = puVar2 + *(int *)(in_EAX + 0x18) * 0x14;
  puVar1 = puVar6 + *(int *)(in_EAX + 0x24);
  if (param_1 == 0) {
    uVar4 = 0x40;
    if (puVar2 < puVar8) {
      puVar7 = puVar2 + 0xc;
      iVar5 = (uint)((int)puVar8 + (-1 - (int)puVar2)) / 0x28 + 1;
      do {
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar7 + -4);
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + -10);
        puVar7 = puVar7 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar4 = 0x80;
    if (puVar2 < puVar8) {
      puVar7 = puVar2 + 0xc;
      iVar5 = (uint)((int)puVar8 + (-1 - (int)puVar2)) / 0x28 + 1;
      do {
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar7 + -2);
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + -8);
        puVar7 = puVar7 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  do {
    if (puVar1 <= puVar6) {
      if (param_1 == 0) {
        if (puVar2 < puVar8) {
          puVar7 = puVar2 + 8;
          iVar5 = (uint)((int)puVar8 + (-1 - (int)puVar2)) / 0x28 + 1;
          do {
            *(undefined4 *)puVar7 = *(undefined4 *)(puVar7 + 4);
            puVar7 = puVar7 + 0x14;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else if (puVar2 < puVar8) {
        puVar7 = puVar2 + 10;
        iVar5 = (uint)((int)puVar8 + (-1 - (int)puVar2)) / 0x28 + 1;
        do {
          *(undefined4 *)puVar7 = *(undefined4 *)(puVar7 + 2);
          puVar7 = puVar7 + 0x14;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      return;
    }
    puVar7 = (ushort *)*puVar6;
    puVar3 = *(ushort **)(puVar7 + 0x12);
    for (; puVar7 <= puVar3; puVar7 = puVar7 + 0x14) {
      puVar9 = puVar7;
      if ((uVar4 & *puVar7) != 0) {
        do {
          for (; (puVar10 = puVar9, puVar9 < puVar3 && ((uVar4 & puVar9[0x14]) != 0));
              puVar9 = puVar9 + 0x14) {
          }
          do {
            puVar11 = puVar10;
            puVar10 = puVar11 + 0x14;
            if (puVar3 < puVar10) {
              if (puVar9 == puVar7) {
                FUN_00401b02(puVar3);
              }
              else {
                if (puVar9 < puVar3) {
                  FUN_00401b46(puVar3);
                }
                if (puVar2 < puVar7) {
                  FUN_00401b46(puVar7 + -0x14);
                }
              }
              goto LAB_00401d91;
            }
          } while ((uVar4 & *puVar10) == 0);
          FUN_00401b46(puVar11);
          puVar9 = puVar10;
        } while( true );
      }
    }
LAB_00401d91:
    puVar6 = puVar6 + 1;
  } while( true );
}

