// rea decompile_all
// name: FUN_00499b5b
// address: 0x499b5b
// body: available
// range: 0x499b5b-0x499c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499b5b(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_EAX;
  uint uVar3;
  int *in_EDX;
  byte *pbVar4;
  
  bVar1 = *(byte *)((int)in_EDX + 9);
  if (((int)(uint)*(ushort *)(in_EAX + 0xfc) < 1 << (bVar1 & 0x1f)) &&
     (*(ushort *)(in_EAX + 0xfc) != 0)) {
    pbVar2 = *(byte **)(in_EAX + 0xd8);
    uVar3 = -((uint)*(byte *)((int)in_EDX + 0xb) * *in_EDX) & 7;
    pbVar4 = pbVar2 + in_EDX[1];
    if (bVar1 == 1) {
      for (; pbVar2 < pbVar4; pbVar4 = pbVar4 + -1) {
        if (*pbVar4 >> (sbyte)uVar3 != 0) {
          *(undefined4 *)(in_EAX + 0x100) = 1;
        }
        uVar3 = 0;
      }
    }
    else if (bVar1 == 2) {
      for (; pbVar2 < pbVar4; pbVar4 = pbVar4 + -1) {
        bVar1 = *pbVar4 >> (sbyte)uVar3;
        if (*(int *)(in_EAX + 0x100) < (int)(bVar1 & 3)) {
          *(uint *)(in_EAX + 0x100) = bVar1 & 3;
        }
        uVar3 = bVar1 >> 2 & 3;
        if (*(int *)(in_EAX + 0x100) < (int)uVar3) {
          *(uint *)(in_EAX + 0x100) = uVar3;
        }
        uVar3 = bVar1 >> 4 & 3;
        if (*(int *)(in_EAX + 0x100) < (int)uVar3) {
          *(uint *)(in_EAX + 0x100) = uVar3;
        }
        if (*(int *)(in_EAX + 0x100) < (int)(uint)(bVar1 >> 6)) {
          *(uint *)(in_EAX + 0x100) = (uint)(bVar1 >> 6);
        }
        uVar3 = 0;
      }
    }
    else if (bVar1 == 4) {
      for (; pbVar2 < pbVar4; pbVar4 = pbVar4 + -1) {
        bVar1 = *pbVar4 >> (sbyte)uVar3;
        uVar3 = bVar1 & 0xf;
        if (*(int *)(in_EAX + 0x100) < (int)uVar3) {
          *(uint *)(in_EAX + 0x100) = uVar3;
        }
        uVar3 = (uint)(bVar1 >> 4);
        if (*(int *)(in_EAX + 0x100) < (int)uVar3) {
          *(uint *)(in_EAX + 0x100) = uVar3;
        }
        uVar3 = 0;
      }
    }
    else if ((bVar1 == 8) && (pbVar2 < pbVar4)) {
      do {
        if ((int)*(uint *)(in_EAX + 0x100) < (int)(uint)*pbVar4) {
          *(uint *)(in_EAX + 0x100) = (uint)*pbVar4;
        }
        pbVar4 = pbVar4 + -1;
      } while (pbVar2 < pbVar4);
    }
  }
  return;
}

