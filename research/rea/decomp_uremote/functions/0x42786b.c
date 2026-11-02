// rea decompile_all
// name: FUN_0042786b
// address: 0x42786b
// body: available
// range: 0x42786b-0x427a62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042786b(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_EDX;
  int *unaff_EBX;
  uint local_8;
  
  iVar3 = unaff_EBX[3];
  iVar1 = *(short *)(iVar3 + 0x16) + 4;
  if ((iVar1 == 0) ||
     ((uint)(*(short *)(iVar3 + 0x16) + 4 +
            (int)*(short *)(iVar3 + 0x3a) + (int)*(short *)(iVar3 + 0x16)) <= *(uint *)(iVar3 + 4)))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0040d706(iVar1,0);
  }
  if (uVar5 == 0) {
    sVar2 = *(short *)(iVar3 + 0x16);
    iVar1 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar1 + sVar2 * 8) = unaff_EBX[0x11];
    *(int *)(iVar1 + 4 + sVar2 * 8) = unaff_EBX[0x12];
    sVar2 = *(short *)(iVar3 + 0x16);
    iVar1 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar1 + 8 + sVar2 * 8) = unaff_EBX[0x13];
    *(int *)(iVar1 + 0xc + sVar2 * 8) = unaff_EBX[0x14];
    sVar2 = *(short *)(iVar3 + 0x16);
    iVar1 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar1 + 0x10 + sVar2 * 8) = unaff_EBX[0x2e];
    *(int *)(iVar1 + 0x14 + sVar2 * 8) = unaff_EBX[0x2f];
    sVar2 = *(short *)(iVar3 + 0x16);
    iVar1 = *(int *)(iVar3 + 0x18);
    *(int *)(iVar1 + 0x18 + sVar2 * 8) = unaff_EBX[0x30];
    *(int *)(iVar1 + 0x1c + sVar2 * 8) = unaff_EBX[0x31];
    *(undefined1 *)((int)*(short *)(iVar3 + 0x16) + *(int *)(iVar3 + 0x1c)) = 0;
    *(undefined1 *)(*(short *)(iVar3 + 0x16) + 1 + *(int *)(iVar3 + 0x1c)) = 0;
    *(undefined1 *)(*(short *)(iVar3 + 0x16) + 2 + *(int *)(iVar3 + 0x1c)) = 0;
    *(undefined1 *)(*(short *)(iVar3 + 0x16) + 3 + *(int *)(iVar3 + 0x1c)) = 0;
    local_8 = FUN_0041106d();
    uVar5 = local_8;
    if (local_8 == 0) {
      uVar4 = FUN_00411377();
      uVar6 = (uint)uVar4;
      uVar5 = local_8;
      if (local_8 == 0) {
        if (*(ushort *)(*unaff_EBX + 0x11e) < uVar4) {
          if (unaff_EBX[7] < (int)uVar6) {
            return 0x16;
          }
          local_8 = *(uint *)(unaff_EBX[0x28] + 0x184);
          uVar5 = FUN_00429450(&local_8,1);
          *(uint *)(unaff_EBX[0x28] + 0x184) = local_8 & 0xffff;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        else if (uVar4 == 0) {
          return 0;
        }
        uVar5 = FUN_004110b4(*(undefined4 *)(unaff_EBX[0x28] + 0x188),uVar6);
        if (uVar5 == 0) {
          *(undefined4 *)(unaff_EBX[2] + 0x88) = *(undefined4 *)(unaff_EBX[0x28] + 0x188);
          *(uint *)(unaff_EBX[2] + 0x8c) = uVar6;
          FUN_0042728d();
          uVar5 = extraout_EDX;
          if (extraout_EDX < *(ushort *)(unaff_EBX + 0x21)) {
            do {
              *(byte *)(unaff_EBX[0x25] + uVar5) = *(byte *)(unaff_EBX[0x25] + uVar5) & 0xe7;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(unaff_EBX + 0x21));
          }
          *(short *)(unaff_EBX + 0x21) = (short)unaff_EBX[0x21] + 4;
          uVar5 = FUN_004272d9();
        }
      }
    }
  }
  return uVar5;
}

