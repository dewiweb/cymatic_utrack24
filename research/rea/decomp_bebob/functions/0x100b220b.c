// rea decompile_all
// name: CMFCControlRenderer::Create
// address: 0x100b220b
// body: available
// range: 0x100b220b-0x100b23c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCControlRenderer::Create(class CMFCControlRendererInfo const
   &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCControlRenderer::Create(CMFCControlRenderer *this,CMFCControlRendererInfo *param_1,int param_2)

{
  undefined4 uVar1;
  HBITMAP__ *pHVar2;
  int iVar3;
  undefined1 local_1c [18];
  short sStack_a;
  
  (**(code **)(*(int *)this + 0x28))();
  CMFCControlRendererInfo::operator=((CMFCControlRendererInfo *)(this + 0x110),param_1);
  pHVar2 = (HBITMAP__ *)GetResourceID((ushort *)(this + 0x110));
  if (pHVar2 != (HBITMAP__ *)0x0) {
    *(int *)(this + 0x54) = *(int *)(this + 0x120) - *(int *)(this + 0x118);
    *(int *)(this + 0x58) = *(int *)(this + 0x124) - *(int *)(this + 0x11c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x15c);
    *(undefined4 *)(this + 0x34) = 0;
    LoadStr(this + 4,pHVar2,(HINSTANCE)0x0,0);
    if (param_2 != 0) {
      CMFCToolBarImages::MirrorVert((CMFCToolBarImages *)(this + 4));
    }
    if (*(ulong *)(this + 0x158) != 0xff000000) {
      CMFCToolBarImages::SetTransparentColor
                ((CMFCToolBarImages *)(this + 4),*(ulong *)(this + 0x158));
    }
    if (((DAT_10168920 != 0) && (*(HANDLE *)(this + 0x8c) != (HANDLE)0x0)) &&
       (*(int *)(this + 0x158) == -0x1000000)) {
      iVar3 = GetObjectW(*(HANDLE *)(this + 0x8c),0x18,local_1c);
      if ((iVar3 != 0) && (sStack_a == 0x20)) {
        (**(code **)(*(int *)this + 0x24))();
      }
    }
    iVar3 = CRect::IsRectNull((CRect *)(this + 0x138));
    if (iVar3 != 0) {
      *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x128);
      *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 300);
      *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x130);
      *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x134);
    }
    iVar3 = CRect::IsRectNull((CRect *)(this + 0x148));
    if (iVar3 != 0) {
      *(undefined4 *)(this + 0x148) = 0;
      *(undefined4 *)(this + 0x14c) = 0;
      *(int *)(this + 0x150) = *(int *)(this + 0x120) - *(int *)(this + 0x118);
      *(int *)(this + 0x154) = *(int *)(this + 0x124) - *(int *)(this + 0x11c);
      *(int *)(this + 0x148) = *(int *)(this + 0x148) + *(int *)(this + 0x128);
      *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + *(int *)(this + 300);
      *(int *)(this + 0x150) = *(int *)(this + 0x150) - *(int *)(this + 0x130);
      *(int *)(this + 0x154) = *(int *)(this + 0x154) - *(int *)(this + 0x134);
    }
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(this + 300);
      *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x134);
      *(undefined4 *)(this + 0x134) = uVar1;
      uVar1 = *(undefined4 *)(this + 0x13c);
      *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 0x144);
      iVar3 = *(int *)(this + 0x14c);
      *(undefined4 *)(this + 0x144) = uVar1;
      *(int *)(this + 0x14c) =
           (*(int *)(this + 0x124) - *(int *)(this + 0x11c)) - *(int *)(this + 0x154);
      *(int *)(this + 0x154) = (*(int *)(this + 0x124) - *(int *)(this + 0x11c)) - iVar3;
    }
  }
  return 1;
}

