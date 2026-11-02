// rea decompile_all
// name: FUN_00597440
// address: 0x597440
// body: available
// range: 0x597440-0x59751d inclusive
// range: 0x597520-0x597746 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597440(void)

{
  void *_Src;
  ushort uVar1;
  int iVar2;
  bool bVar3;
  size_t _Size;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *local_10;
  
  bVar3 = true;
  if (*(int *)(in_ECX + 0xc3c) != *(int *)(in_ECX + 4)) {
    while (bVar3) {
      switch(*(undefined4 *)(in_ECX + 0xc)) {
      case 0:
        for (local_10 = *(char **)(in_ECX + 0xc3c); local_10 < *(char **)(in_ECX + 4);
            local_10 = local_10 + 1) {
          if ((*local_10 == -0x11) && (local_10[1] == 'Q')) {
            if (local_10 != *(char **)(in_ECX + 0xc3c)) {
              _Size = *(int *)(in_ECX + 4) - (int)local_10;
              _memcpy(*(void **)(in_ECX + 0xc3c),local_10,_Size);
              *(size_t *)(in_ECX + 4) = *(int *)(in_ECX + 0xc3c) + _Size;
            }
            *(undefined4 *)(in_ECX + 0xc) = 1;
            break;
          }
        }
        if (*(int *)(in_ECX + 0xc) != 1) {
          *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0xc3c);
          bVar3 = false;
        }
        break;
      case 1:
        if (*(int *)(in_ECX + 4) - *(int *)(in_ECX + 0xc3c) < 4) {
          bVar3 = false;
        }
        else {
          uVar1 = *(ushort *)(*(int *)(in_ECX + 0xc3c) + 2);
          *(ushort *)(in_ECX + 8) = uVar1 & 0xf000;
          *(ushort *)(in_ECX + 10) = uVar1 & 0xfff;
          if (*(short *)(in_ECX + 10) == 0) {
            *(undefined4 *)(in_ECX + 0xc) = 3;
          }
          else if (*(ushort *)(in_ECX + 10) < 0x58d) {
            *(undefined4 *)(in_ECX + 0xc) = 2;
          }
          else {
            *(undefined4 *)(in_ECX + 0xc) = 0;
            **(undefined1 **)(in_ECX + 0xc3c) = 0;
            bVar3 = false;
          }
        }
        break;
      case 2:
        if (*(int *)(in_ECX + 4) - *(int *)(in_ECX + 0xc3c) <
            (int)(*(ushort *)(in_ECX + 10) + 7 & 0xfffffffc)) {
          bVar3 = false;
        }
        else {
          *(undefined4 *)(in_ECX + 0xc) = 3;
        }
        break;
      case 3:
        uVar5 = *(ushort *)(in_ECX + 10) + 7;
        uVar6 = uVar5 & 0xfffffffc;
        if ((uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 0xc3c)) < uVar6 + 4) {
          bVar3 = false;
        }
        else {
          iVar2 = *(int *)(*(int *)(in_ECX + 0xc3c) + uVar6);
          iVar4 = FUN_005ac0a0(0x50544c4d,*(undefined4 *)(in_ECX + 0xc3c),uVar5 & 0xfffc);
          if (iVar2 == iVar4) {
            *(undefined4 *)(in_ECX + 0xc) = 4;
            bVar3 = false;
          }
          else {
            _Src = (void *)(*(int *)(in_ECX + 0xc3c) + 4 + uVar6);
            if (_Src < *(void **)(in_ECX + 4)) {
              iVar2 = *(int *)(in_ECX + 4);
              _memcpy(*(void **)(in_ECX + 0xc3c),_Src,*(int *)(in_ECX + 4) - (int)_Src);
              *(int *)(in_ECX + 4) = *(int *)(in_ECX + 0xc3c) + (iVar2 - (int)_Src);
            }
            else {
              **(undefined1 **)(in_ECX + 0xc3c) = 0;
              bVar3 = false;
            }
            *(undefined4 *)(in_ECX + 0xc) = 0;
          }
        }
        break;
      default:
        bVar3 = false;
      }
    }
  }
  return;
}

