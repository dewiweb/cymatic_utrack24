// rea decompile_all
// name: FUN_00429da7
// address: 0x429da7
// body: available
// range: 0x429da7-0x429e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429da7(uint param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = param_1 & 0xc0;
  if (uVar3 == 0) {
    in_EAX = in_EAX / 2;
LAB_00429dd0:
    *(int *)(in_ECX + 0x1dc) = in_EAX;
  }
  else {
    if (uVar3 == 0x40) goto LAB_00429dd0;
    if (uVar3 == 0x80) {
      in_EAX = in_EAX * 2;
      goto LAB_00429dd0;
    }
    if (uVar3 == 0xc0) goto LAB_00429dd0;
  }
  uVar3 = param_1 & 0x30;
  if (uVar3 == 0) {
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
    goto LAB_00429e24;
  }
  if (uVar3 == 0x10) {
    iVar1 = *(int *)(in_ECX + 0x1dc);
LAB_00429e0c:
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  }
  else {
    if (uVar3 != 0x20) {
      if (uVar3 != 0x30) goto LAB_00429e24;
      iVar1 = *(int *)(in_ECX + 0x1dc) * 3;
      goto LAB_00429e0c;
    }
    iVar1 = *(int *)(in_ECX + 0x1dc) / 2;
  }
  *(int *)(in_ECX + 0x1e0) = iVar1;
LAB_00429e24:
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if ((param_1 & 0xf) == 0) {
    iVar2 = iVar1 + -1;
  }
  else {
    iVar2 = ((param_1 & 0xf) - 4) * iVar1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(in_ECX + 0x1e4) = iVar2;
  *(int *)(in_ECX + 0x1dc) = (int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8;
  iVar1 = *(int *)(in_ECX + 0x1e0);
  *(int *)(in_ECX + 0x1e0) = (int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8;
  *(int *)(in_ECX + 0x1e4) =
       (int)(*(int *)(in_ECX + 0x1e4) + (*(int *)(in_ECX + 0x1e4) >> 0x1f & 0xffU)) >> 8;
  return;
}

