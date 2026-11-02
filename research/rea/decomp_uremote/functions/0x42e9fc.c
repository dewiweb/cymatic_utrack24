// rea decompile_all
// name: FUN_0042e9fc
// address: 0x42e9fc
// body: available
// range: 0x42e9fc-0x42ebd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042e9fc(int param_1,uint param_2)

{
  uint uVar1;
  uint in_EAX;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  local_8 = 0;
  puVar2 = *(uint **)(param_1 + 0x214);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_00411912(0x1a4,&local_8);
    if (local_8 != 0) {
      return local_8;
    }
    puVar2[0x68] = 0;
    *(uint **)(param_1 + 0x214) = puVar2;
  }
  if (in_EAX == 0) {
LAB_0042eb53:
    if (param_2 != 0) {
      if ((puVar2[1] != 0) && (puVar2[1] != param_2)) goto LAB_0042eb65;
      puVar2[1] = param_2;
    }
    uVar3 = *puVar2;
    uVar1 = puVar2[1];
    if (((uVar3 != 0) && (uVar1 != 0)) && (puVar2[6] == 0)) {
      uVar4 = FUN_00411976(4,0,&local_8);
      puVar2[6] = uVar4;
      if ((local_8 == 0) && (1 < uVar3)) {
        iVar7 = uVar1 * 4;
        puVar5 = puVar2 + 7;
        iVar6 = uVar3 - 1;
        iVar8 = iVar7;
        do {
          *puVar5 = puVar2[6] + iVar8;
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 + iVar7;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    if (*puVar2 == 0) {
      uVar3 = FUN_00411976(0x20,0,&local_8);
      puVar2[0x25] = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      uVar3 = FUN_00411976(0xc4,0,&local_8);
      puVar2[0x36] = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      uVar3 = FUN_00411976(0x10,0,&local_8);
      puVar2[0x48] = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      uVar3 = FUN_00411976(4,0,&local_8);
      puVar2[0x22] = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      puVar2[0x23] = uVar3 + in_EAX * 4;
      puVar2[0x24] = param_1 + 0x84;
      puVar2[0x35] = param_1 + 0xa8;
      puVar2[0x47] = param_1 + 0x1cc;
      if (1 < in_EAX) {
        puVar5 = puVar2 + 0x37;
        iVar6 = in_EAX - 1;
        do {
          *puVar5 = puVar5[-1] + 0xc4;
          puVar5[-0x11] = puVar5[-0x12] + 0x20;
          puVar5[0x12] = puVar5[0x11] + 0x10;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *puVar2 = in_EAX;
      goto LAB_0042eb53;
    }
    if (*puVar2 == in_EAX) goto LAB_0042eb53;
LAB_0042eb65:
    local_8 = 3;
  }
  return local_8;
}

