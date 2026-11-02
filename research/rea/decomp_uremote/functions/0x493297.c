// rea decompile_all
// name: FUN_00493297
// address: 0x493297
// body: available
// range: 0x493297-0x4933ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493297(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  int in_ECX;
  byte *in_EDX;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int local_1c [4];
  int local_c;
  int local_8;
  
  bVar2 = *(byte *)(in_ECX + 8);
  if (bVar2 != 3) {
    uVar5 = (uint)*(byte *)(in_ECX + 9);
    if ((bVar2 & 2) == 0) {
      local_1c[0] = uVar5 - in_EDX[3];
      local_8 = 1;
    }
    else {
      local_1c[0] = uVar5 - *in_EDX;
      local_1c[1] = uVar5 - in_EDX[1];
      local_1c[2] = uVar5 - in_EDX[2];
      local_8 = 3;
    }
    iVar4 = local_8;
    if ((bVar2 & 4) != 0) {
      local_8 = local_8 + 1;
      local_1c[iVar4] = uVar5 - in_EDX[4];
    }
    iVar4 = 0;
    local_c = 0;
    if (local_8 != 0) {
      do {
        iVar3 = local_1c[iVar4];
        if ((iVar3 < 1) || ((int)uVar5 <= iVar3)) {
          local_1c[iVar4] = 0;
        }
        else {
          local_c = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_8);
      iVar4 = 0;
      if (local_c != 0) {
        if (uVar5 == 2) {
          pbVar6 = in_EAX + *(int *)(in_ECX + 4);
          for (; in_EAX < pbVar6; in_EAX = in_EAX + 1) {
            *in_EAX = *in_EAX >> 1 & 0x55;
          }
        }
        else if (uVar5 == 4) {
          iVar4 = 0xf >> ((byte)local_1c[0] & 0x1f);
          pbVar6 = in_EAX + *(int *)(in_ECX + 4);
          for (; in_EAX < pbVar6; in_EAX = in_EAX + 1) {
            *in_EAX = *in_EAX >> ((byte)local_1c[0] & 0x1f) & ((byte)iVar4 | (byte)(iVar4 << 4));
          }
        }
        else if (uVar5 == 8) {
          pbVar6 = in_EAX + *(int *)(in_ECX + 4);
          iVar4 = 0;
          for (; in_EAX < pbVar6; in_EAX = in_EAX + 1) {
            pbVar1 = (byte *)(local_1c + iVar4);
            iVar4 = iVar4 + 1;
            if (local_8 <= iVar4) {
              iVar4 = 0;
            }
            *in_EAX = *in_EAX >> (*pbVar1 & 0x1f);
          }
        }
        else if (uVar5 == 0x10) {
          pbVar6 = in_EAX + *(int *)(in_ECX + 4);
          for (; in_EAX < pbVar6; in_EAX = in_EAX + 2) {
            iVar3 = (int)(uint)CONCAT11(*in_EAX,in_EAX[1]) >> ((byte)local_1c[iVar4] & 0x1f);
            iVar4 = iVar4 + 1;
            if (local_8 <= iVar4) {
              iVar4 = 0;
            }
            *in_EAX = (byte)((uint)iVar3 >> 8);
            in_EAX[1] = (byte)iVar3;
          }
        }
      }
    }
  }
  return;
}

